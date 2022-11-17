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

#ifndef LABO_05_H_ERATOSTHENE_H
#define LABO_05_H_ERATOSTHENE_H

#include <vector>

enum Premier {pasPremier, premier};

std::vector<Premier> criblage(std::vector<Premier>&);
std::vector<int>nbrPremiers(const std::vector<Premier>&);


#endif //LABO_05_H_ERATOSTHENE_H
