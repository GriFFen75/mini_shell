#include "../HLib.h"

//
// Created by kali on 5/31/22.
//

#include "myothercommand.h"

void myothercommande(char ** argv){
    pid_t pid_fils;
    pid_fils = fork();
    if(pid_fils == 0){
        //execlp("/bin/sh","sh",argv[1],NULL); //V1
//        execlp(argv[0],argv[0],argv[1],argv[2],argv[3],argv[4],argv[5],(char*)NULL); V2
        execvp(argv[0],argv);
    }else{
        wait(NULL);
    }
}