//---------------------------------------------------------
// Fichier        : outils.cpp
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Fichier contenant l'algorithme de saisie et de modification du flux cout.
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

int saisie (const int min, const int max, const std::string& msgErreur){
   // Déclaration de variables internes
   int saisie;
   bool erreur;

   do {
      // Demande de saisie à l'utilisateur
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

ostream& operator<<(ostream& os, vector<int> vec){
   for(size_t i = 0; i < vec.size(); ++i){
         // Rajoute un retour à la ligne dès que 10 éléments ont été affichés
         if(i % NB_ELEMENTS_LIGNE == 0){
            os << endl;
         }
         os << setw(LARGEUR_NBR) << vec.at(i) << " ";
      }
   return os;
}

ostream& operator<<(ostream& os, vector<Premier> vec){
   for(size_t i = 0; i < vec.size(); ++i) {
      if (i % NB_ELEMENTS_LIGNE == 0) {
         os << endl;
      }

      if(vec.at(i) == Premier::premier){
         os << setw(LARGEUR_NBR) << SYMBOLE_X << " ";
      }else{
         os << setw(LARGEUR_NBR) << SYMBOLE_O << " ";
      }
   }
   return os;
}