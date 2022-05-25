#include "../HLib.h"

//
// Created by kali on 5/25/22.
//

#include "mypwd.h"

void mypwd(){
    char S[255];
    getcwd(S,255);
    printf("Repertoire courant %s\n",S);
}

