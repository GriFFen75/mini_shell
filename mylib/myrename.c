#include "../HLib.h"

//
// Created by kali on 5/25/22.
//

#include "myrename.h"

int myrename(char * chaineSplitOld , char * chaineSplitNew){
    rename(chaineSplitOld,chaineSplitNew);
    return 1;
}