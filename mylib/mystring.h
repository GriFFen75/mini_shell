//
// Created by kali on 5/19/22.
//

#ifndef UNTITLED1_MYSTRING_H_INCLUDED
#define UNTITLED1_MYSTRING_H_INCLUDED

#include <bits/types/FILE.h>

int mystrlen(const char *str);
char *my_strcpy(char *dest,const char *src);
char *my_string_n_cpy(char *dest,const char *str,int n);
char * mystrcat(register char * s1, register const char * s2);
char* mystrchr(char *p, char separateur);
char* mystrtok(char *chaine);
int mystrcmp(const char *s1, const char *s2);
char * mystrstr(char *string, char *substring);
int mystrNbLineFile(FILE * Fichier);

#endif //UNTITLED1_MYSTRING_H_INCLUDED
