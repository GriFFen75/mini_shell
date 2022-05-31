#include "../HLib.h"

//
// Created by kali on 5/31/22.
//

#include "mygetuid.h"

void mygetuid(){
    printf("Mon UID est %i\n", getuid()); // affichera par exemple "Mon UID est 0 si root"
    if (getuid()==0){
        printf("\nVous etes root\n");
    }
    else{
        printf("\nVous n'etes pas root\n");
    }
}