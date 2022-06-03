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

        FILE *FichierHistoryCalculLine = fopen(getenv("HIST_PATH"), "r"); //changer ce path là
        if (FichierHistoryCalculLine == NULL) {
            printf("\nle fichier n'a pas été trouvé\n");
            return 1;
        }
        char caractère;
        int NbLigne = mystrNbLineFile(FichierHistoryCalculLine);
        int j = 0;
        printf("le nombre de ligne : %d\n", NbLigne);
        fclose(FichierHistoryCalculLine); // on close puis reouvre le fichier pour recommencer a 0


//        FILE *FichierHistory = fopen(getenv("PHS"), "r");
        FILE *FichierHistory = fopen(getenv("HIST_PATH"), "r");
        printf("\nLe fichier sera dans : %s\n", getenv("PATH_HISTORY_SHELL_TXT")); //ne fonctionne plus vue que je ne peux pas regler mon beug dans mypathHistory
        FILE *FichierStokage = fopen(getenv("PATH_HISTORY_SHELL_TXT"), "w");

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
    /*
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
    }*/
    return 1;
}