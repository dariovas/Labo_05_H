//---------------------------------------------------------
// Fichier        : Labo_05_H.cpp
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Application permettant de calculer et afficher
//                : le calendrier d'une année donnée en paramètre.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (lionel) Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#ifndef LABO_05_H_OUTILS_H
#define LABO_05_H_OUTILS_H

#include <vector>
#include "string"
#include <iostream>
#include "iomanip"
#include "eratosthene.h"

const char SYMBOLE_X = 'x';
const char SYMBOLE_O = 'o';

int saisie (int, int, const std::string&);
void clear_buffer();
std::ostream& operator<<(std::ostream& os, std::vector<int> vec);
std::ostream& operator<<(std::ostream& os, std::vector<Premier> vec);

#endif //LABO_05_H_OUTILS_H
