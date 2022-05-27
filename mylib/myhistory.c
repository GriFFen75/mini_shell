#include "../HLib.h"

//
// Created by kali on 5/26/22.
//

#include "myhistory.h"

void myhistory(int NbCommande){ //le tail
    FILE *FichierHistory = fopen("/home/kali/.zsh_history","r");
    FILE *FichierStokage = fopen("/home/kali/CLionProjects/mini_shellG/.historyCommande.txt","w");
    char caractère;

    while((caractère = getc(FichierHistory)) != EOF){
        putc(caractère, FichierStokage);
    }
    fclose(FichierHistory);
    fclose(FichierStokage);
}