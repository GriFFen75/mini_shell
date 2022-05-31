#include "HLib.h"

//la foncione pipe et fork peuvent etre utile .
//gcc mylib/mycd.c mylib/mydate.c mylib/myecho.c mylib/myhelp.c mylib/myhistory.c mylib/myls.c mylib/mymd.c mylib/mypwd.c mylib/myrename.c mylib/myrmdir.c mylib/mystring.c mylib/mytime.c mylib/mytouch.c main.c -o GRFShell
//voir la commande signal
//faire les arrow

/*SIGINT =  signal d'interruption générale
 *SIGTERM = signal d'interuption du programme */

/*ajouter la commande dans un fichier GRFShellrc
 * */


int NbArguments;
//int Nbcaractere;


char * shell_read_line(){ //fonctione pour lire les ligne rentré
    char *commande ;
    size_t len;
    size_t caractere;
    commande = (char *) malloc( len * sizeof(char));
    caractere = getline(&commande,&len,stdin);
    len = mystrlen(commande);
    commande[caractere-1]='\0';
    return commande;
}

char** shell_split_line(char * line){ //separe la ligne recupere
//    char *commande;
    char **splitCommande = malloc (sizeof(splitCommande)); //ici je pense
    int i = 0;
    char *strToken = mystrtok(line);
//    commande=strToken;
    while (strToken != NULL){
        //mystrcat(splitCommande,strToken);
        splitCommande =(char **) realloc(splitCommande,(i+1)*sizeof (char*));
        splitCommande[i] = strToken;
        strToken=mystrtok(NULL);
        i++;
    }
    NbArguments=i;
    //printf("la commande apres strtok est : %s\n",commande);
    return (splitCommande);
}

int shell_execute(char** chaineSplit){
    char *commande = chaineSplit[0];

    //commencement des commandes
    if (mystrcmp(commande,"cd")==0){
        mycd(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"ls")==0){       //fini mais je sort a chaque foi
        myls(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"rm")==0){       //le prog sort
        myrmdir(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"ren")==0){           //fini mais sort du prog a chaque foi
        myrename(chaineSplit[1],chaineSplit[2]);
    }
    else if (mystrcmp(commande,"echo")==0){
        myecho(chaineSplit,NbArguments);
    }
    else if (mystrcmp(commande,"md")==0){ //je sort a chaque foi
        mymd(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"history")==0){ //changer le path du history quand on aura fini //toujours le meme probleme mon prog sort
        myhistory(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"pwd")==0){
        mypwd();
    }
    else if (mystrcmp(commande,"touch")==0){ //le prog sort
        mytouch(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"date")==0){
        mydate();
    }
    else if (mystrcmp(commande,"time")==0){
        mytime();
    }
    else if (mystrcmp(commande,"cls")==0){
        mycls();
    }
    else if (mystrcmp(commande,"help")==0){
        myhelp(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"manuel")==0){
        printf(" - cd\n - echo\n - pwd\n - exit\n - ls\n - md\n - rm\n - help\n - ren\n - touch\n - history\n - date\n");
    }
    else if (mystrcmp(commande,"exit")==0){
        return EXIT_SUCCESS;
    }
    else{
        printf ("\nCe que vous avez ecris n'est pas une commande\nConsultez la liste des commandes possible avec 'manuel'");
    }
}

void shell_loop(void){
    char *line;
    char **chaineSplit;
    int status;
    do {
        printf("\nGriFFen_Shell> ");
        line = shell_read_line();
        chaineSplit = shell_split_line(line); //separation commande et option
//        printf("dans shell_loop chaineSplit[0] : %s\n",chaineSplit[0]);
//        printf("printf dans shell_loop : %s\n",line);
        status = shell_execute(chaineSplit);
    } while (status);
}

int main(int argc, char **argv){

    // Chargement des fichiers de configurations si besoin.
    printf("Mini SHELL - exit pour Quitter \n");
    // Run command loop.
    shell_loop();
    printf("\n\nFin du Mini SHELL \n");
    return EXIT_SUCCESS;
}
