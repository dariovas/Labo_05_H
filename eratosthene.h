//---------------------------------------------------------
// Fichier        : eratosthene.h
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Fichier permettant de cribler le tableau
//                : et de récupérer les nombres premiers.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (lionel) Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#ifndef LABO_05_H_ERATOSTHENE_H
#define LABO_05_H_ERATOSTHENE_H

#include <vector>

// Déclaration de l'enum dont les valeurs seront stockées dans le vecteur criblage
enum class Premier {pasPremier, premier};

// Cette fonction permet de cribler le tableau
// Explication des paramètres :
// vector<Premier>&           : vecteur contenant les cases des nombres étant premiers
std::vector<Premier> criblage(std::vector<Premier>&);


// Cette fonction permet de recupérer les nombres premiers étant dans le tableau criblé
// Explication des paramètres :
// const vector<Premier>&     : vecteur criblé
std::vector<int>nbrPremiers(const std::vector<Premier>&);


#endif //LABO_05_H_ERATOSTHENE_H
