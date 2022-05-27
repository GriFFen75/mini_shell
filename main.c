#include "HLib.h"

//la foncione pipe et fork peuvent etre utile .

int NbArguments;
//int Nbcaractere;


char * shell_read_line(){ //fonctione pour lire les ligne rentré
    char *commande ;
    size_t len;
    size_t caractere;
    commande = (char *) malloc( len * sizeof(char));
    caractere = getline(&commande,&len,stdin);
    len = mystrlen(commande);
    commande[caractere-1]='\0';
    return commande;
}

char** shell_split_line(char * line){ //separe la ligne recupere
//    char *commande;
    char **splitCommande = malloc (sizeof(splitCommande)); //ici je pense
    int i = 0;
    char *strToken = mystrtok(line);
//    commande=strToken;
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

int shell_execute(char** chaineSplit){
    char *commande = chaineSplit[0];

    //commencement des commandes
    if (mystrcmp(commande,"cd")==0){
        mycd(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"ls")==0){       //fini mais je sort a chaque foi
        myls(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"rm")==0){
        myrmdir(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"ren")==0){           //fini mais sort du prog a chaque foi
        myrename(chaineSplit[1],chaineSplit[2]);
    }
    else if (mystrcmp(commande,"echo")==0){
        myecho(chaineSplit,NbArguments);
    }
    else if (mystrcmp(commande,"md")==0){ //je sort a chaque foi
        mymd(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"history")==0){
        myhistory(2);
    }
    else if (mystrcmp(commande,"pwd")==0){
        mypwd();
    }
    else if (mystrcmp(commande,"touch")==0){
        mytouch(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"help")==0){
        myhelp(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"manuel")==0){
        printf(" - cd\n - echo\n - pwd\n - exit\n - ls\n - md\n - rm\n - help\n - ren\n - help\n - touch\n - history\n");
    }
    else if (mystrcmp(commande,"exit")==0){
        return EXIT_SUCCESS;
    }
    else{
        printf ("\nCe que vous avez ecris n'est pas une commande\nConsultez la liste des commandes possible avec 'manuel'");
    }
}



void shell_loop(void){
    char *line;
    char **chaineSplit;
    int status;
    do {
        printf("\nGriFFen_Shell> ");
        line = shell_read_line();
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
