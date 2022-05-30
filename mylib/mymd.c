#include "../HLib.h"

//
// Created by kali on 5/25/22.
//

#include "mymd.h"

int mymd(char*chaineSplit){
    mkdir(chaineSplit,0755);
    return 1;
}

