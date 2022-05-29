//
// Created by kali on 5/19/22.
//

#include "mystring.h"

#include <stdio.h>
#include <stdlib.h>


int mystrlen(const char *str){
    int i;
    for (i=0;str[i]!='\0';i++);
    return i;
}
char *my_strcpy(char *dest,const char *str){
    int i;
    int x = mystrlen(str);
    dest= malloc (sizeof(char)*x+1);
    if( dest == NULL )
    {
        fprintf(stderr,"Allocation impossible");
    }
    else
    {
        for (i=0;i<x;i++)
        {
            dest[i]=str[i];
        }
        dest[i]='\0';
        return dest;
    }
}
char *my_string_n_cpy(char *dest,const char *str,int n){
    int i=0;
    int x = mystrlen(str);
    dest= malloc (sizeof(char)*x+1);
    while (str[i] != '\0' && i<n)
    {
        dest[i]=str[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char * mystrcat(register char * s1, register const char * s2){
    char *save = s1;
    for (; *s1; ++s1);
    while (*s1++ = *s2++);
    return(save);
}
char* mystrchr(char *p, char separateur) { //recherche le caractère placer en parametre (ici mon separateur)
    do{
        if (*p == separateur){
            return (char*)p;
        }
    }while (*p++);
    return 0;
}

char* mystrtok(char *chaine){ //Pour extraire mes tokens
    static char *p;
    static int offset;
    char separateur = ' ';

    // premier appel avec une chaine
    if(chaine != NULL){
        p = chaine;
        offset = 0;
    }
        // appels suivants
    else{
        p += offset;
    }

    if(*p != '\0'){
        char *sep = mystrchr(p, separateur);
        if(sep == NULL)
            sep = mystrchr(p,'\0');

        *sep = '\0';
        offset = sep - p + 1;

        return p;
    }
    else{
        offset = 0;
    }
    return NULL;
}

int mystrcmp(const char *s1, const char *s2){ // pour comparer 2 chaines (renvoie 0 si identique)
    int ret = 0;

    while (!(ret = *(unsigned char *) s1 - *(unsigned char *) s2) && *s2) ++s1, ++s2;

    if (ret < 0) {
        ret = -1;
    }
    else if (ret > 0){
        ret = 1 ;
    }
    return ret;
}
char * mystrstr(char *string, char *substring){
    register char *a, *b;

    b = substring;
    if (*b == 0) {
        return string;
    }
    for ( ; *string != 0; string += 1) {
        if (*string != *b) {
            continue;
        }
        a = string;
        while (1) {
            if (*b == 0) {
                return string;
            }
            if (*a++ != *b++) {
                break;
            }
        }
        b = substring;
    }
    return NULL;
}

int mystrmy(const char *s1 , const char *s2){
    if ( s2 == NULL ){
        printf("Il manque au moins un paramètre");
    }
    else{
        int i;
        int result;
        //printf("le chaine 1 : %s\nLa chaine 2 : %s",s1,s2);
        for ( i = 0 ; i < mystrlen(s2);i++){
            for (int j = 0; j < mystrlen(s1); j++) {
                if (s1[j] == s2[i]){
                    //printf("caractère trouvé %c | %c\n",s1[j],s2[i]); //si j==mystrlen(s2) alors le mot a été trouver entierrement
                }
            }

        }
        if (i == mystrlen(s2)){
            printf("\nLe i = %d\nLe mystrlen(s2) = %d",i, mystrlen(s2));
            result=0;
            return result;
        }
        else{
            printf("\nLe i = %d\nLe mystrlen(s2) = %d",i, mystrlen(s2));
            result=1;
            return result;
        }
    }

}

