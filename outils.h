//---------------------------------------------------------
// Fichier        : outils.h
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Fichier permettant de demander la saisie à l'utilisateur et d'afficher
//                : les vecteurs dans le flux cout.
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

const char SYMBOLE_X             = 'x';
const char SYMBOLE_O             = 'o';
const int LARGEUR_NBR            = 2;
const int NB_ELEMENTS_LIGNE      = 10;

// Cette fonction permet de récupérer la saisie de l'utilisateur en ayant effectuer un contrôle
// Explication des paramètres :
// const int min              : valeur de saisie minimum
// const int max              : valeur de saisie maximum
// const string& msgErreur    : message d'erreur à afficher lors d'une entrée incorecte
int saisie (int, int, const std::string&);

void clear_buffer();

std::ostream& operator<<(std::ostream& os, std::vector<int> vec);
std::ostream& operator<<(std::ostream& os, std::vector<Premier> vec);

#endif //LABO_05_H_OUTILS_H
