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

#include "outils.h"

using namespace std;

void clear_buffer(){
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int saisie (const int& min, const int& max, const string& msgEntree, const string& msgErreur){

   // Déclaration de variables internes
   int saisie;
   bool erreur;

   do {
      // Message et entrée utilisateur
      cout << msgEntree;
      cin >> saisie;

      // Vérification de l'entrée
      erreur = cin.fail() or saisie < min or saisie > max;
      if (erreur) {
         cout << msgErreur;
         cin.clear();
      }
      clear_buffer();

   } while (erreur);

   return saisie;
}

void afficherVecteur(const vector<char> vec){
   cout << "[";
   if(vec.size() != 0){
      for(size_t i = 0; i < vec.size(); ++i){
         // Rajoute une virgule uniquement à partir du 2ème élément du tableau
         if(i > 0){
            cout << ", ";
         }
         cout << vec[i];
      }
   }
   cout << "]" << endl;
}