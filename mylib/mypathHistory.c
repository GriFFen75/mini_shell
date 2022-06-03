#include "../HLib.h"

//
// Created by kali on 6/2/22.
//

#include "mypathHistory.h"

void mypathHistory(){
    char * home = malloc(sizeof(char)* mystrlen(getenv("HOME")));
    home = getenv("HOME");

    //pour le fichier d'historique des commandes deja fais + le fichier txt

    /*ce programme est sensé fonctionner mais je ne sais pas pourquoi ca ne marche pas. quand on va voir dans le debuguer mes variables sont bien égale à la bonne chose.
     * mais il ne veut pas m'initialiser mes variables d'environnements */


//    putenv("HOME_HOME");
//    setenv("HOME_HOME",home,0);
//
//    putenv("HOME_HOME_TXT");
//    setenv("HOME_HOME_TXT",home,1);


//    char * home_home = malloc(sizeof(char)* mystrlen(getenv("HOME_HOME")));
//    char * home_home = getenv("HOME_HOME");
//    char * home_home_txt = malloc(sizeof(char)* mystrlen(getenv("HOME_HOME_TXT")));
//    char *home_home_txt = getenv("HOME_HOME_TXT");
//
//
//    char * shell = malloc(sizeof(char)* mystrlen(getenv("SHELL")));
//    char * shell = getenv("SHELL");
//
//    char * pathHistory;
//    char * pathGRFShell_historyTxt;
//
//    if (mystrstr(shell,"/zsh")) { //pour faire un shell adaptatif
//        pathHistory = malloc(sizeof (char) * sizeof (home_home) + sizeof (char) * mystrlen("/.zsh_history"));
//        pathHistory = mystrcat(home_home, "/.zsh_history"); //concatenation du path pour le fopen
//        pathGRFShell_historyTxt = malloc(sizeof (char) * sizeof (home_home_txt) + sizeof (char) * mystrlen("/.HistoryCommandeZSH.txt"));
//        pathGRFShell_historyTxt = mystrcat(home_home_txt,"/.HistoryCommandeZSH.txt");
//
//    }
//    else if (mystrstr(shell,"/bash")){
//        pathHistory = malloc(sizeof (char) * sizeof (home_home) + sizeof (char) * mystrlen("/.bash_history"));
//        pathHistory = mystrcat(home_home, "/.bash_history");
//        pathGRFShell_historyTxt = malloc(sizeof (char) * sizeof (home_home_txt) + sizeof (char) * mystrlen("/.HistoryCommandeBASH.txt"));
//        pathGRFShell_historyTxt = mystrcat(home_home_txt,"/.HistoryCommandeBASH.txt");
//
//    }
//    else if (mystrstr(shell,"/sh")){
//        pathHistory = mystrcat(home_home, "/.sh_history");
//        pathGRFShell_historyTxt = mystrcat(home_home_txt,"/.HistoryCommandeSH.txt");
//
//    }
//    if (mystrstr(shell,"GRFShell")){
//        pathHistory = mystrcat(home_home, "/.GRFShell_history");
//        pathGRFShell_historyTxt = mystrcat(home_home_txt,"/.HistoryCommandeGRFShell.txt");
//    }
//    else {
//        printf("votre shell n'est pas repertorié veuillez contacter l'administrateur");
//    }
//
//    putenv("PHS"); //PATH_HISTORY_SHELL
//    setenv("PHS",pathHistory,0);
//
//    putenv("PATH_HISTORY_SHELL_TXT");
//    setenv("PATH_HISTORY_SHELL_TXT",pathGRFShell_historyTxt,0);


    //pour le fichier d'historique de commande de mon shell
    char* pathGRFShell_history = mystrcat(home,"/.GRFShell_history");
    putenv("HIST_PATH");
    setenv("HIST_PATH",pathGRFShell_history,0);

    //pour le fichier de stockage des commandes .txt

}