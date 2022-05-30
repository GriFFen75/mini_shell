#include "../HLib.h"

//
// Created by kali on 5/25/22.
//

#include "myrmdir.h"

int myrmdir(char *chaineSplit){
    printf("Le path est %s",chaineSplit);
    rmdir(chaineSplit); // si il reussi il ferme le prog jsp pk
    return 1;
}
