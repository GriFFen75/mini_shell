#include "../HLib.h"

//
// Created by kali on 5/25/22.
//

#include "myhelp.h"

void myhelp(char * chaineSplit){
    if (mystrcmp(chaineSplit,"cd")==0){
        printf(" - cd : \n(change directory) Change de repertoire\n");
    }
    else if (mystrcmp(chaineSplit,"echo")==0){
        printf(" - echo : \nAffiche une ligne de texte mise en paramètre\n");
    }
    else if (mystrcmp(chaineSplit,"pwd")==0){
        printf(" - pwd : \nAffiche le repertoire courant\n");
    }
    else if (mystrcmp(chaineSplit,"exit")==0){
        printf(" - exit : \nStop le programme\n");
    }
    else if (mystrcmp(chaineSplit,"ls")==0){
        printf(" - ls : \nListe le contenu du répertoire\n");
    }
    else if (mystrcmp(chaineSplit,"rm")==0){
        printf(" - rm : \n(Remove Directory) Supprime le répertoire mit en paramètre\n");
    }
    else if (mystrcmp(chaineSplit,"rename")==0){
        printf(" - ren : \nRennome le fichier du premier parametre en celui du deuxième\n");
    }
    else if (mystrcmp(chaineSplit,"md")==0){
        printf(" - md : \n(Make directory) créer un répertoire d'ont le chemin est mis en paramètre \n");
    }
    else if (mystrcmp(chaineSplit,"help")==0){
        printf(" - help <nom de la commande> : \npermet d'avoir des informations sur celle-ci\n");
    }
    else{
        printf("\nLa commande %s n'existe pas\nConsultez la liste des commandes possible avec 'manuel'\n",chaineSplit[1]);
    }
}