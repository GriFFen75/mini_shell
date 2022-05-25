#include "../HLib.h"

//
// Created by kali on 5/25/22.
//


void myls(char * chaineSplit){
    struct dirent *lecture;
    DIR *rep;
    if (chaineSplit  == NULL){
        rep = opendir(".");
    }
    else{
        rep = opendir(chaineSplit);
    }
    while (lecture = readdir(rep)){
        printf("%s\n", lecture->d_name);
    }
    closedir(rep);
}

