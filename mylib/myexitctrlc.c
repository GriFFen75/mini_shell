#include "../HLib.h"

//
// Created by kali on 6/2/22.
//

#include "myexitctrlc.h"

int myexitctrlc() {
    void INThandler(int);

    pid_t pid = fork();
    if (pid == 0){
        signal(SIGINT, INThandler);
    }
    else{
        return 1;
    }
}

void  INThandler(int sig){
    char  c;

    signal(sig, SIG_IGN);
    printf("OUCH, did you hit Ctrl-C?\n"
           "Do you really want to quit? [y/n] ");
    c = getchar();
    if (c == 'y' || c == 'Y')
        exit(0);
    else
        signal(SIGINT, INThandler);
    getchar(); // Get new line character
}

//        signal(SIGINT, INThandler);
//        while (1)
//            pause();
//        return 0;