#include "../HLib.h"

//
// Created by kali on 5/25/22.
//

#include "myecho.h"

void myecho(char ** chaineSplit , int NbArguments){
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