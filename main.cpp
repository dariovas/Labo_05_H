//---------------------------------------------------------
// Fichier        : main.cpp
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Application permettant de cribler un tableau de N valeurs (saisie par l'utilisateur)
//                : puis de récupérer les nombres premiers de ce dernier.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (lionel) Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#include <cstdlib>  //EXIT_SUCCESS
#include <vector>
#include "eratosthene.h"
#include "outils.h"

using namespace std;

int main() {
   //Déclaration des variables
   const int VALEUR_MIN    = 2;
   const int VALEUR_MAX    = 100;
   const string msgErreur  = "Cette entree est incorrecte, veuillez recommencer.\n";
   int n;

   cout  << "ce programme ..."   << endl << endl;
   cout  << "nbre de valeurs ["
         << VALEUR_MIN << ".. "
         << VALEUR_MAX << "] : ";

   n = saisie(VALEUR_MIN, VALEUR_MAX, msgErreur);

   // Initialisation du vecteur de départ
   vector<Premier> tab((size_t)n, Premier::premier);

   cout  << "criblage du tableau" << endl;
   cout  << criblage(tab)  << endl << endl;

   cout  << "liste des nbres 1er";
   cout  << nbrPremiers(tab);

   return EXIT_SUCCESS;
}






