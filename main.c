#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "mylib/mystring.h"


char mystrcat(char ** tab,char *mot){
    //for (int i = 0 ; )
    return NULL;
}


char * shell_read_line(){
    char *commande ;
    size_t len = mystrlen(commande);
    size_t caractere;
    commande = (char *) malloc(len * sizeof(char));

    caractere = getline(&commande,&len,stdin);
    printf("print dans shell_read_line : %s\nLe nombre de caractère : %ld \n",commande,caractere);
    return commande;
}

char** shell_split_line(char * line){
    char *commande;
    char **splitCommande;
    //size_t tailleCommande = mystrlen(line)+1;
    char *strToken = mystrtok(line);
    commande=strToken;
    while (strToken != NULL){
        mystrcat(splitCommande,strToken);
        printf("Token = %s\n",strToken);
        strToken=mystrtok(NULL);
    }
    printf("la commande apres strtok est : %s\n",commande);
    /*
    printf("la commande : %s",line);
    //printf("longueur de line : %ld",tailleCommande);
    for (int i = 0; line[i] != NULL ;i++){
            buffer[i] = line[i];
            printf("\n\ni = %d \n\n",i);
        if (line[i]==' '){
            //printf("\n\nsalut\n\n");
            for(int j = 0 ; buffer[j] <= i ; j++){
                commande[j] = buffer[j];
            }


        }
    }*/

}

int shell_execute(char** chaineSplit){
    if (chaineSplit[1]=="exit"){
        //exit(0);
    }
}

void shell_loop(void){
    char *line;
    line = malloc(sizeof(shell_read_line()));
    char **chaineSplit;
    int status;
    do {
        printf("Esiea_shell_> ");
        line = shell_read_line();
        chaineSplit = shell_split_line(line); //separation commande et option
        printf("dans shell : %s\n",chaineSplit);
        printf("printf dans shell_loop %s\n",line);
        status = shell_execute(chaineSplit);
        free(line);
        //free(chaineSplit);
    } while (status);
}

int main(int argc, char **argv){

    // Chargement des fichiers de configurations si besoin.
    printf("Mini SHELL - exit pour Quitter \n");
    // Run command loop.
    shell_loop();
    printf("Fin du Mini SHELL \n");
    return EXIT_SUCCESS;
}
