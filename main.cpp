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

/*
 * A faire :
 *    - changer les entetes selon les buts du fichiers (librairies outils peut avoir le meme but pour le h et le cpp)
 *    - Commenter les entetes des fonctions + code
 *    - Faire fonction nbPremiers
 *    - Cout
 *    - Regarder si des sous fonctions sont possibles
 *    - include & warning
 *    - constante char x et o
 */

#include <cstdlib>  //EXIT_SUCCESS
#include <vector>
#include "eratosthene.h"
#include "outils.h"



using namespace std;

//entetes




int main() {
   //Déclaration des variables
   const int VALEUR_MIN = 2;
   const int VALEUR_MAX = 100;
   const string msgEntree = "nbre de valeurs [2..100] : ";
   const string msgErreur = "Cette entree est incorrecte, veuillez recommencer.\n";
   int n; //

   cout  << "ce programme ..." << endl << endl;
   cout  << "nbre de valeurs ["
         << VALEUR_MIN << ".. "
         << VALEUR_MAX << "] : " << endl;

   n = saisie(VALEUR_MIN, VALEUR_MAX, msgErreur);
   vector<Premier> tab(n, Premier::premier);

   cout  << "criblage du tableau" << endl;
   cout  << criblage(tab) << endl;

   cout  << "liste des nbres 1er";
   cout  << nbrPremiers(tab);

   return EXIT_SUCCESS;
}

//fonctions






