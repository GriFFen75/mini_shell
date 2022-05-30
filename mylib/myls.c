#include "../HLib.h"

//
// Created by kali on 5/25/22.
//


int myls(char * chaineSplit){
    struct dirent *lecture;
    DIR *rep;
    if ((chaineSplit)  == NULL){
        rep = opendir("."); //afficher le ls dans le repertoire courant
    }
    else{
        rep = opendir(chaineSplit);
    }
    while (lecture = readdir(rep)){
        printf("%s\n", lecture->d_name);
    }
    closedir(rep);
    return 1;
}