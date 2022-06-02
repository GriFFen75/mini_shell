#include "HLib.h"

//la foncione pipe et fork et awk peuvent etre utile .
//gcc mylib/mycd.c mylib/mydate.c mylib/myecho.c mylib/myhelp.c mylib/myhistory.c mylib/myls.c mylib/mymd.c mylib/mypwd.c mylib/myrename.c mylib/myrmdir.c mylib/mystring.c mylib/mytime.c mylib/mytouch.c mylib/mycls.c mylib/mygetpid++.c mylib/mygetpid.c mylib/mygetpidPereFils.c mylib/mygetppid.c mylib/mygetuid.c mylib/myothercommand.c mylib/myexitctrlc.c  main.c -o GRFShell
//voir la commande signal
//faire les arrow

/*SIGINT =  signal d'interruption générale
 *SIGTERM = signal d'interuption du programme */

/*ajouter la commande dans un fichier GRFShellrc
 * */

/*utiliser fgets sur windows*/

/*refaire le tout avec un getc au lieux de getline pour pouvoir regler les tabulations avec \t*/


int NbArguments;
int Nbcaractere;



char * shell_read_line(){ //fonctione pour lire les ligne rentré
    char *commande ;
    size_t len;
    size_t caractere;
    commande = (char *) malloc( len * sizeof(char));
    caractere = getline(&commande,&len,stdin);
    len = mystrlen(commande);
    commande[caractere-1]='\0';

    //ajout de la commande dans le fichier GRFShellrc
//    char * homesave = getenv("HOME");
//    printf("\nLe home  : %s\n",homesave);
//    putenv("HOME_HOME");
//    printf("\nLe home_home avant : %s\n",getenv("HOME_HOME"));
//    char * home_home = getenv("HOME_HOME");
//    if (home_home == homesave){
//    }
//    else{
//        //setenv("HOME_HOME", homesave,0);
//    }
//    home_home = homesave;//getenv("HOME_HOME");
//    printf("\nLe home_home apres : %s\n",home_home);
//
//    char* pathGRFShell_history = mystrcat(home_home,"/.GRFShell_history");
//    printf("\nLe path de GRFShell_history : %s\n",pathGRFShell_history);
//    putenv("HIST_PATH");
//    setenv("HIST_PATH",pathGRFShell_history,1);
    FILE * GRFShell_history = fopen(getenv("HIST_PATH"),"w");
    for (int i = 0; i < mystrlen(commande);i++){
        putc(commande[i],GRFShell_history);
        //printf("%c\n",commande[i]);
    }
    //putc("\n",GRFShell_history);
    if (unsetenv("HOME_HOME") == 0){
        unsetenv("HOME_HOME");
    }
    //clearenv();//c'est DANGEREUX
    fclose(GRFShell_history);
    //putc((char)"\n",GRFShellrc);
    commande[caractere-1]='\0';

    return commande;

/*test du getc pour utiliser le <Ctrl>+C */
//    int i = 0;
//    while (getchar() != '\n'){
//        printf("\navant le getc\n");
//        commande = getchar();
//        printf("\nLe caractère : %c\n",commande[i]);
//        i++;
//    }
//    Nbcaractere=i;
//    printf("La commade est : %s\nLe nombre de caractère est %d",commande,Nbcaractere);
//    return commande;
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

    //myexitctrlc();
    if (chaineSplit[0]==NULL){
        printf("\nvous n'avez rien écrit\n");
    }
    //commencement des commandes
    else if (mystrcmp(commande,"cd")==0){
        mycd(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"ls")==0){
        myls(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"rm")==0){
        myrmdir(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"ren")==0 || mystrcmp(commande,"rename")==0){
        myrename(chaineSplit[1],chaineSplit[2]);
    }
    else if (mystrcmp(commande,"echo")==0){
        myecho(chaineSplit,NbArguments);
    }
    else if (mystrcmp(commande,"md")==0 || mystrcmp(commande,"mkdir")==0){
        mymd(chaineSplit[1]);
    }
    else if (mystrcmp(commande,"history")==0){ //faut que je change les paths
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
    else if (mystrcmp(commande,"pid")==0){
        mygetpidPereFils();
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
        //printf ("\nCe que vous avez ecris n'est pas une commande\nConsultez la liste des commandes possible avec 'manuel'");
        printf("Recherche dans le repertoire bin :\n");
        myothercommande(chaineSplit);
    }
}

void shell_loop(void){
    char *line;
    char **chaineSplit;
    int status;
    do {
        char *repertoireCourant = getcwd(repertoireCourant,255);
        printf("\nGriFFen_Shell::%s> ", repertoireCourant);
        line = shell_read_line();
        chaineSplit = shell_split_line(line); //separation commande et option
//        printf("dans shell_loop chaineSplit[0] : %s\n",chaineSplit[0]);
//        printf("printf dans shell_loop : %s\n",line);
        status = shell_execute(chaineSplit);
        free(line);
        free(chaineSplit);
    } while (status);
}

int main(int argc, char **argv){

    // Chargement des fichiers de configurations si besoin.

    mypathHistory();

    printf("Mini SHELL - exit pour Quitter \n");
    // Run command loop.
    shell_loop();
//    signal(SIGTERM, ); pour faire quelque chose quand on ferme le prog
    printf("\n\nFin du Mini SHELL \n");
    return EXIT_SUCCESS;
}
