//---------------------------------------------------------
// Fichier        : outils.h
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Fichier permettant de demander la saisie à
//                  l'utilisateur et d'afficher les vecteurs
//                  dans le flux cout.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Lionel)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#ifndef LABO_05_H_OUTILS_H
#define LABO_05_H_OUTILS_H

#include <vector>          //utilisation des vecteurs
#include <string>          //utilisation des string
#include <iostream>        //cout & cin
#include <iomanip>         //setw
#include <limits>          //numeric_limit
#include "eratosthene.h"   //enum class Premier

//Déclaration constantes
const char SYMBOLE_X             = 'x';
const char SYMBOLE_O             = 'o';
const int  LARGEUR_NBR           = 2;
const int  NB_ELEMENTS_LIGNE     = 10;

/**
 * @brief   Cette fonction permet de récupérer la saisie de
 *          l'utilisateur en ayant effectuer un contrôle
 *
 * @param   const int min :
 *          valeur de saisie minimum
 * @param   const int max :
 *          valeur de saisie maximum
 * @param   const string& msgErreur :
 *          message d'erreur à afficher lors d'une entrée incorecte
 * @return  retourne un entier
 */
int saisie (int, int, const std::string&);

/**
 * @brief   fonction pour vider le buffer
 */
void clear_buffer();

/**
 * @brief   surchage de l'opérateur "<<" pour faciliter
 *          l'affichage de vecteur de type int
 */
std::ostream& operator<<(std::ostream& os, std::vector<int> vec);

/**
 * @brief   surcharge de l'opérateur "<<" pour faciliter
 *          l'affichage de vecteur de type Enum Class Premier
 */
std::ostream& operator<<(std::ostream& os, std::vector<Premier> vec);

#endif //LABO_05_H_OUTILS_H
