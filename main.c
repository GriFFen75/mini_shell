#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "mylib/mystring.h"
//#include "mylib/mystring.c" mettre celui la si on veut faire avec le terminal


int NbArguments;
int Nbcaractere;

char * shell_read_line(){ //fonctione pour lire les ligne rentré
    char *commande ;
    size_t len = mystrlen(commande);
    size_t caractere;
    commande = (char *) malloc( len * sizeof(char));

    caractere = getline(&commande,&len,stdin);

    printf("Len : %zu\nprint dans shell_read_line : %s\nLe nombre de caractère : %ld \n",len,commande,caractere);
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
    printf("La chaineSplit[0] dans shell_execute : |%s|\n",chaineSplit[0]);
    printf("La commande dans shell_execute : |%s|",commande);

    //commencement des commandes
    if (mystrcmp(commande,"cd")==0){
        printf("\nle cd est bon\n");
    }
    else if (mystrcmp(commande,"ls")==0){
        printf("\nle ls est bon\n");
    }
    else if (mystrcmp(commande,"echo")==0){//juste faire un printf de ce qu'il y a en parametre
        printf("\n");
        for (int i = 1 ; i < NbArguments ; i++){
            printf("%s ",chaineSplit[i]);
        }
    }
    else if (mystrcmp(commande,"md")==0){ //mkdir
        printf("\nle md/mkdir est bon\n");
    }
    else if (mystrcmp(commande,"help")==0){
        printf("\nle help est bon\n");
    }
    else if (mystrcmp(commande,"exit")==0){
        exit(0);
    }
    else{
        printf ("\nCe que vous avez ecris n'est pas une commande\nConsultez la liste des commandes possible avec help");
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
        printf("dans shell_loop chaineSplit[0] : %s\n",chaineSplit[0]);
        printf("printf dans shell_loop : %s\n",line);
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
