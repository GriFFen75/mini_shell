#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>

#include "mylib/mystring.h"
//#include "mylib/mystring.c" //mettre celui la si on veut faire avec le terminal


//la foncione pipe et fork peuvent etre utile .

int NbArguments;
int Nbcaractere;

char * shell_read_line(){ //fonctione pour lire les ligne rentré
    char *commande ;
    size_t len = mystrlen(commande);
    size_t caractere;
    commande = (char *) malloc( len * sizeof(char));

    caractere = getline(&commande,&len,stdin);

//    printf("Len : %zu\nprint dans shell_read_line : %s\nLe nombre de caractère : %ld \n",len,commande,caractere);
    commande[caractere-1]='\0'; //commande[caractere],
    Nbcaractere=caractere;
    return commande;
}

char** shell_split_line(char * line){ //separe la ligne recupere
    char *commande;
    char **splitCommande = malloc (sizeof(splitCommande)); //ici je pense
    int i = 0;
    char *strToken = mystrtok(line);
    commande=strToken;
    while (strToken != NULL){
        //mystrcat(splitCommande,strToken);
        splitCommande =(char **) realloc(splitCommande,(i+1)*sizeof (char*));
        splitCommande[i] = strToken;
        strToken=mystrtok(NULL);
        i++;
    }
    NbArguments=i;
    //printf("la commande apres strtok est : %s\n",commande);
    return (splitCommande);
}

int shell_execute(char** chaineSplit){ // faire la fonction stpcmp()
    char *commande = chaineSplit[0];

    //commencement des commandes
    if (mystrcmp(commande,"cd")==0){                //fini
        char S[255];
        const char * path = getenv( "PATH" );
        printf ("PATH environement variable == %s\n",path);
        const char * home = getenv( "HOME" );
        if (chaineSplit[1]==NULL){
            chdir(home);
        }
        else{
            chdir(chaineSplit[1]);
        }
        getcwd(S,255);
        printf("\nRepertoire courant %s\n",S);
        //printf("%d\n",pathconf(path,1)); // permet de savoir la taille du char*
    }
    else if (mystrcmp(commande,"ls")==0){       //je sort a chaque foi
        struct dirent *lecture;
        DIR *rep;
        if (chaineSplit[1]  == NULL){
            char * path;
            getwd(path);
            rep = opendir(path);
        }
        else{
            rep = opendir(chaineSplit[1]);
        }
        while (lecture = readdir(rep))
        {
            printf("%s\n", lecture->d_name);
        }

        closedir(rep);

        //return 0;
    }

    else if (mystrcmp(commande,"rm")==0){           //
        char * path = chaineSplit[1];
        printf("Le path est %s",path);
        rmdir(chaineSplit[1]); // si il reussi il ferme le prog jsp pk

    }
    else if (mystrcmp(commande,"rename")==0){           //fini
        char *old = chaineSplit[1];
        char *new = chaineSplit[2];
        rename(old,new);
    }
    else if (mystrcmp(commande,"echo")==0){         //fini
        printf("\n");
        for (int i = 1 ; i < NbArguments ; i++){
            //printf("%s ",chaineSplit[i]);
            if (chaineSplit[i]==NULL){
                printf("Vous n'avez rien écrit en paramètre");
            }
            else{
                write(1,chaineSplit[i],mystrlen(chaineSplit[i]));
                write(1," ",1);
            }
        }
    }
    else if (mystrcmp(commande,"md")==0){ //je sort a chaque foi
        char * path = chaineSplit[1];
        mkdir(path,0755);

    }
    else if (mystrcmp(commande,"history")==0){
        printf("\nle history est bon\n");
    }
    else if (mystrcmp(commande,"pwd")==0){          //fini
//        const char * pathRepertoireCourant = getenv( "PWD" ); //fonctionne pas , le path ne change pas
//        printf("Le path du repertoire courant est : %s\n",pathRepertoireCourant);
        char S[255];
        getcwd(S,255);
        printf("Repertoire courant %s\n",S);
    }

    else if (mystrcmp(commande,"help")==0){
        if (mystrcmp(chaineSplit[1],"cd")==0){
            printf(" - cd : \n(change directory) Change de repertoire\n");
        }
        else if (mystrcmp(chaineSplit[1],"echo")==0){
            printf(" - echo : \nAffiche une ligne de texte mise en paramètre\n");
        }
        else if (mystrcmp(chaineSplit[1],"pwd")==0){
            printf(" - pwd : \nAffiche le repertoire courant\n");
        }
        else if (mystrcmp(chaineSplit[1],"exit")==0){
            printf(" - exit : \nStop le programme\n");
        }
        else if (mystrcmp(chaineSplit[1],"ls")==0){
            printf(" - ls : \nListe le contenu du répertoire\n");
        }
        else if (mystrcmp(chaineSplit[1],"rm")==0){
            printf(" - rm : \n(Remove Directory) Supprime le répertoire mit en paramètre\n");
        }
        else if (mystrcmp(chaineSplit[1],"rename")==0){
            printf(" - rename : \nRennome le fichier du premier parametre en celui du deuxième\n");
        }
        else if (mystrcmp(chaineSplit[1],"md")==0){
            printf(" - md : \n(Make directory) créer un répertoire d'ont le chemin est mis en paramètre \n");
        }
        else{
            printf("\nLa commande %s n'existe pas\nConsultez la liste des commandes possible avec 'manuel'\n",chaineSplit[1]);
        }
    }
    else if (mystrcmp(commande,"manuel")==0){
        printf(" - cd\n - echo\n - pwd\n - exit\n - ls\n - md\n - rm\n");
    }
    else if (mystrcmp(commande,"exit")==0){
        return EXIT_SUCCESS;
    }
    else{
        printf ("\nCe que vous avez ecris n'est pas une commande\nConsultez la liste des commandes possible avec manuel");
    }
}



void shell_loop(void){
    char *line;
//    line = malloc(sizeof(shell_read_line()));
    char **chaineSplit;
//    chaineSplit = malloc (sizeof(shell_split_line(line)));
    int status;
    do {
        printf("\nEsiea_shell_> ");
        line = shell_read_line();
//        line = realloc(&line,sizeof(shell_read_line()));
//
        chaineSplit = shell_split_line(line); //separation commande et option
//        printf("dans shell_loop chaineSplit[0] : %s\n",chaineSplit[0]);
//        printf("printf dans shell_loop : %s\n",line);
        status = shell_execute(chaineSplit);
    } while (status);
}

int main(int argc, char **argv){

    // Chargement des fichiers de configurations si besoin.
    printf("Mini SHELL - exit pour Quitter \n");
    // Run command loop.
    shell_loop();
    printf("\nFin du Mini SHELL \n");
    return EXIT_SUCCESS;
}
