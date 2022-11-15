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

#include "eratosthene.h"

void criblage(std::vector<char>& tab){
   for(size_t i = 0; i < tab.size(); ++i){
      if(i == 0 || i == 1){
         tab.at(i) = 'o';
      }

      if(tab.at(i) == 'x') {
         for (size_t j = i + 1; j < tab.size(); ++j) {
            if (tab.at(j) == 'x' && j % i == 0) {
               tab.at(j) = 'o';
            }
         }
      }
   }
}

std::vector<int>nbrPremiers(const std::vector<char>& criblage){
   std::vector<int> tab(0);

   for(int i = 0; i < tab.size(); ++i){

   }
}