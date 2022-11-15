//---------------------------------------------------------
// Fichier        : Labo_05_H.cpp
// Auteur(s)      : Piollet Lionel & Vasques Dario
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

int saisie (const int& min, const int& max, const std::string& msgEntree, const std::string& msgErreur);
void afficherVecteur(const std::vector<char>);
void clear_buffer();

#endif //LABO_05_H_OUTILS_H