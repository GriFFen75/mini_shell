#include "../HLib.h"

//
// Created by kali on 6/2/22.
//

#include "mypathHistory.h"

void mypathHistory(){
    char * homesave = getenv("HOME");

    char* pathGRFShell_history = mystrcat(homesave,"/.GRFShell_history");
    putenv("HIST_PATH");
    setenv("HIST_PATH",pathGRFShell_history,0);
}