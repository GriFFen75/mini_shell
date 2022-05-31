#include "../HLib.h"

//
// Created by kali on 5/26/22.
//

#include "myhistory.h"

int myhistory(char * NbCommandeChar){
    int NbCommande;
    if (NbCommandeChar == NULL){
        NbCommande= 10;
    }
    else{
        NbCommande = strtol(NbCommandeChar,NULL , 10); //commande pour tranformer min char * en int
    }
    printf("\nLe NbCommande : %d\n",NbCommande);

    char * shell = getenv( "SHELL");
    register char * home = getenv("HOME");

    if (mystrstr(shell,"zsh")) { //on regarde quel shell on a pour pouvoir travailler en fonction  //j'aurais pu faire juste un open de
        char * pathHistory= mystrcat(home,"/.zsh_history"); //concatenation du path pour le fopen
        FILE *FichierHistoryCalculLine = fopen(pathHistory, "r"); //changer ce path là
        if (FichierHistoryCalculLine == NULL) {
            printf("\nle fichier n'a pas été trouvé\n");
            return 1;
        }
        char caractère;
//        char caractereFor;
        int NbLigne = mystrNbLineFile(FichierHistoryCalculLine);
        int j = 0;
//        for (int k = 0;(caractereFor = getc(FichierHistoryCalculLine)) != EOF; ++k) { //pour calculer le nombre de ligne max
//            if (caractereFor == '\n') {
//                NbLigne++;
//            }
//        }
        printf("le nombre de ligne : %d\n", NbLigne);
        fclose(FichierHistoryCalculLine); // on close puis reouvre le fichier pour recommencer a 0


        FILE *FichierHistory = fopen(pathHistory, "r");
        char * pathStokage = "../.historyCommandeZSH.txt"; //le place dans le dossier mini_shell
        printf("\nLe fichier sera dans : %s\n",pathStokage);
        FILE *FichierStokage = fopen(pathStokage, "w");
//        if (FichierStokage == NULL) {
//            printf("\nle fichier n'a pas été trouvé\nCréation du fichier dans le dossier du projet\n");
//            mytouch(pathStokage);
//            fclose(FichierStokage);
//            FILE *FichierStokage = fopen(pathStokage, "w");
//        }
            while ((caractère = getc(FichierHistory)) != EOF) {
                //putc(caractère, FichierStokage);
                if (caractère == '\n') {
                    j++;
                }
                if (j >= NbLigne - NbCommande && j < NbLigne) {
                    putc(caractère, FichierStokage);
                    printf ("%c",caractère);
                }
            }
            fclose(FichierHistory);
            fclose(FichierStokage);
    }
    else if (mystrstr(shell,"bash")) { //on regarde quel shell on a pour pouvoir travailler en fonction  //j'aurais pu faire juste un open de
        char * pathHistory= mystrcat(home,"/.bash_history"); //concatenation du path pour le fopen
        FILE *FichierHistoryCalculLine = fopen(pathHistory, "r"); //changer ce path là
        if (FichierHistoryCalculLine == NULL) {
            printf("\nle fichier n'a pas été trouvé\n");
            return 1;
        }
        char caractère;
        char caractereFor;
        int NbLigne = 0;
        int j = 0;
        for (int k = 0;
             (caractereFor = getc(FichierHistoryCalculLine)) != EOF; ++k) { //pour calculer le nombre de ligne max
            if (caractereFor == '\n') {
                NbLigne++;
            }
        }
        printf("le nombre de ligne : %d\n", NbLigne);
        fclose(FichierHistoryCalculLine); // on close puis reouvre le fichier pour recommencer a 0


        FILE *FichierHistory = fopen(pathHistory, "r");
        char * pathStokage = "../.historyCommandeBASH.txt"; //le place dans le dossier mini_shell
        printf("\nLe fichier sera dans : %s",pathStokage);
        FILE *FichierStokage = fopen(pathStokage, "w");
        while ((caractère = getc(FichierHistory)) != EOF) {
            //putc(caractère, FichierStokage);
            if (caractère == '\n') {
                j++;
            }
            if (j >= NbLigne - NbCommande && j < NbLigne) {
                putc(caractère, FichierStokage);
                printf ("%c",caractère);
            }
        }
        fclose(FichierHistory);
        fclose(FichierStokage);
    }
    else if (mystrstr(shell,"/sh")) { //on regarde quel shell on a pour pouvoir travailler en fonction  //j'aurais pu faire juste un open de
        char * pathHistory= mystrcat(home,"/.sh_history"); //concatenation du path pour le fopen
        FILE *FichierHistoryCalculLine = fopen(pathHistory, "r"); //changer ce path là
        if (FichierHistoryCalculLine == NULL) {
            printf("\nle fichier n'a pas été trouvé\n");
            return 1;
        }
        char caractère;
        char caractereFor;
        int NbLigne = 0;
        int j = 0;
        for (int k = 0;
             (caractereFor = getc(FichierHistoryCalculLine)) != EOF; ++k) { //pour calculer le nombre de ligne max
            if (caractereFor == '\n') {
                NbLigne++;
            }
        }
        printf("le nombre de ligne : %d\n", NbLigne);
        fclose(FichierHistoryCalculLine); // on close puis reouvre le fichier pour recommencer a 0


        FILE *FichierHistory = fopen(pathHistory, "r");
        char * pathStokage = "../.historyCommandeSH.txt"; //le place dans le dossier mini_shell
        printf("\nLe fichier sera dans : %s",pathStokage);
        FILE *FichierStokage = fopen(pathStokage, "w");
        while ((caractère = getc(FichierHistory)) != EOF) {
            //putc(caractère, FichierStokage);
            if (caractère == '\n') {
                j++;
            }
            if (j >= NbLigne - NbCommande && j < NbLigne) {
                putc(caractère, FichierStokage);
                printf ("%c",caractère);
            }
        }
        fclose(FichierHistory);
        fclose(FichierStokage);
    }
    else if (mystrstr(shell,"/ksh")) { //on regarde quel shell on a pour pouvoir travailler en fonction  //j'aurais pu faire juste un open de
        char * pathHistory= mystrcat(home,"/.ksh_history"); //concatenation du path pour le fopen
        FILE *FichierHistoryCalculLine = fopen(pathHistory, "r"); //changer ce path là
        if (FichierHistoryCalculLine == NULL) {
            printf("\nle fichier n'a pas été trouvé\n");
            return 1;
        }
        char caractère;
        char caractereFor;
        int NbLigne = 0;
        int j = 0;
        for (int k = 0;
             (caractereFor = getc(FichierHistoryCalculLine)) != EOF; ++k) { //pour calculer le nombre de ligne max
            if (caractereFor == '\n') {
                NbLigne++;
            }
        }
        printf("le nombre de ligne : %d\n", NbLigne);
        fclose(FichierHistoryCalculLine); // on close puis reouvre le fichier pour recommencer a 0


        FILE *FichierHistory = fopen(pathHistory, "r");
        char * pathStokage = "../.historyCommandeKSH.txt"; //le place dans le dossier mini_shell
        printf("\nLe fichier sera dans : %s",pathStokage);
        FILE *FichierStokage = fopen(pathStokage, "w");
        while ((caractère = getc(FichierHistory)) != EOF) {
            if (caractère == '\n') {
                j++;
            }
            if (j >= NbLigne - NbCommande && j < NbLigne) {
                putc(caractère, FichierStokage);
                printf ("%c",caractère);
            }
        }
        fclose(FichierHistory);
        fclose(FichierStokage);
    }
    else {
        printf("votre shell n'est pas repertorié veuillez contacter l'administrateur");
    }
    return 1;
}