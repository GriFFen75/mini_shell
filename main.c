#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "mylib/mystring.h"


char * shell_read_line(){
    char *commande ;
    size_t len = mystrlen(commande);
    size_t caractere;
    commande = (char *) malloc(len * sizeof(char));

    caractere = getline(&commande,&len,stdin);

    printf("Len : %d\nprint dans shell_read_line : %s\nLe nombre de caractère : %ld \n",len,commande,caractere);
    commande[caractere],commande[caractere-1]='\0';

    return commande;
}

char** shell_split_line(char * line){
    char *commande;
    char **splitCommande = malloc (sizeof(splitCommande));
    //size_t tailleCommande = mystrlen(line)+1;
    int i = 0;
    char *strToken = mystrtok(line);
    commande=strToken;
    while (strToken != NULL){
        //mystrcat(splitCommande,strToken);
        splitCommande[i] = strToken;
        //printf("Token = %s\n",strToken);
        strToken=mystrtok(NULL);
        printf("Le mot %d est : %s\n",i,splitCommande[i]);
        i++;
    }
    printf("la commande apres strtok est : %s\n",commande);
    return (splitCommande);
}

int shell_execute(char** chaineSplit){
    char *commande = chaineSplit[0];
    printf("La chaineSplit[0] dans shell_execute : |%s|\n",chaineSplit[0]);
    printf("La commande dans shell_execute : |%s|",commande);
//    switch ((int) commande)
//        case 'cd':
//            printf("le cd est bon");
    if ((int) commande =="cd"){
        printf("le cd est bon");
    }
} // impossible de faire fonctionner l'utilisation de la recup de la commande



void shell_loop(void){
    char *line;
    line = malloc(sizeof(shell_read_line()));
    char **chaineSplit = malloc (sizeof(chaineSplit));
    int status;
    do {
        printf("\nEsiea_shell_> ");
        line = shell_read_line();
        chaineSplit = shell_split_line(line); //separation commande et option
        printf("dans shell_loop chaineSplit[0] : %s\n",chaineSplit[0]);
        printf("printf dans shell_loop : %s\n",line);
        status = shell_execute(chaineSplit);
        free(line);
        free(chaineSplit);
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
