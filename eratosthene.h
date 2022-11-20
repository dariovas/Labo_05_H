//---------------------------------------------------------
// Fichier        : eratosthene.h
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Fichier permettant de cribler le tableau
//                  et de récupérer les nombres premiers.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Lionel)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#ifndef LABO_05_H_ERATOSTHENE_H
#define LABO_05_H_ERATOSTHENE_H

#include <vector> //utilisation des vecteurs

// Déclaration de l'enum dont les valeurs seront
// stockées dans le vecteur criblage
enum class Premier {pasPremier, premier};

/**
 * @brief Fonction pour cribler un tableau
 *
 * @param vector<Premier>&
 *        vecteur contenant les entiers en 2 et N
 * @return retourne le vecteur cribler
 */
std::vector<Premier> criblage(std::vector<Premier>&);

/**
 * @brief   Fonction pour récupérer les nombres premiers
 *          dans le tableau criblé
 *
 * @param   const vector<Premier>& :
 *          vecteur criblé
 * @return  retourne un vecteur d'entier de nombres premiers
 */
std::vector<int>nbrPremiers(const std::vector<Premier>&);

#endif //LABO_05_H_ERATOSTHENE_H
