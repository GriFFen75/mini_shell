#include "../HLib.h"

//
// Created by kali on 5/26/22.
//

#include "myhistory.h"

void myhistory(char * NbCommandeChar){
    int NbCommande = strtol(NbCommandeChar,NULL , 10); //commande pour tranformer min char * en int
    printf("\nLe NbCommande : %d\n",NbCommande);
    FILE *FichierHistoryCalculLine = fopen("/home/kali/.zsh_history","r"); //changer ce path là
    if (FichierHistoryCalculLine == NULL){
        printf("\nle fichier n'a pas été trouvé\n");
    }
    else{

        char caractère ;
        char caractereFor;
        int NbLigne = 0;
        int j = 0 ;
        for (int k = 0; (caractereFor = getc(FichierHistoryCalculLine)) != EOF ; ++k) { //pour calculer le nombre de ligne max
            if (caractereFor == '\n'){
                NbLigne++;
            }
        }
        printf("le nombre de ligne : %d\n",NbLigne);
        fclose(FichierHistoryCalculLine); // on close puis reouvre le fichier pour recommencer a 0


        FILE *FichierHistory = fopen("/home/kali/.zsh_history","r");

        FILE *FichierStokage = fopen("/home/kali/CLionProjects/mini_shellG/.historyCommande.txt","w");
        if (FichierStokage == NULL){
            printf("\nle fichier n'a pas été trouvé\n");
        }
        else{
            while((caractère = getc(FichierHistory)) != EOF){
                //putc(caractère, FichierStokage);
                if (caractère == '\n'){
                    j++;
                }
                if (j>=NbLigne-NbCommande && j<NbLigne){
                    putc(caractère, FichierStokage);
//                    printf ("\nle j = %d\n",j);

                }
            }
            fclose(FichierHistory);
            fclose(FichierStokage);
        }
    }
}