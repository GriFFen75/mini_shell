#include "../HLib.h"

//
// Created by kali on 5/28/22.
//

#include "mydate.h"

void mydate(){
    int day, mois, an;
    time_t now;

    // Renvoie l'heure actuelle
    time(&now);
    // Convertir au format heure locale
    printf("Aujourd'hui est : %s", ctime(&now));
    struct tm *local = localtime(&now);

    day = local->tm_mday;
    mois = local->tm_mon + 1;
    an = local->tm_year + 1900;

    // Afficher la date courante
    printf("La date : %02d/%02d/%d\n", day, mois, an);
}
