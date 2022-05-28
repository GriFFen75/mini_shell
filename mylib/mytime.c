#include "../HLib.h"

//
// Created by kali on 5/28/22.
//

#include "mytime.h"

void mytime(){
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    int h = local->tm_hour;
    int min = local->tm_min;
    int s = local->tm_sec;


    printf("L'heure : %02d:%02d:%02d\n", h, min, s);
}
