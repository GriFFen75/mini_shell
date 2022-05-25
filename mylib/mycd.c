#include "../HLib.h"


//
// Created by kali on 5/25/22.
//

#include "mycd.h"

void mycd(char * chaineSplit){
    char S[255];
    const char * path = getenv( "PATH" );
    printf ("PATH environement variable == %s\n",path);
    const char * home = getenv( "HOME" );
    if (chaineSplit==NULL){
        chdir(home);
    }
    else{
        chdir(chaineSplit);
    }
    getcwd(S,255);
    printf("\nRepertoire courant %s\n",S);
    //printf("%d\n",pathconf(path,1)); // permet de savoir la taille du char*
}