#include "../HLib.h"

//
// Created by kali on 5/26/22.
//

#include "mytouch.h"

int mytouch(char *chaineSplit){
    FILE *F1;
    if (chaineSplit == NULL){
        F1 = fopen(".","a");
    }
    else{
        //mettre ici le code erreur si l'arguments n'est pas trouver comme path
        F1 = fopen(chaineSplit,"a");
    }
    fclose(F1);
    return 1;
}