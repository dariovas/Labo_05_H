//---------------------------------------------------------
// Fichier        : Labo_05_H.cpp
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Application permettant de calculer et afficher
//                : le calendrier d'une année donnée en paramètre.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (lionel) Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#include "eratosthene.h"

std::vector<Premier> criblage(std::vector<Premier>& tab){
   for(size_t i = 0; i < tab.size(); ++i){
      if(i == 0 || i == 1){
         tab.at(i) = Premier::pasPremier;
      }

      if(tab.at(i) == Premier::premier) {
         for (size_t j = i + 1; j < tab.size(); ++j) {
            if (tab.at(j) == Premier::premier && j % i == 0) {
               tab.at(j) = Premier::pasPremier;
            }
         }
      }
   }

   return tab;
}

std::vector<int> nbrPremiers(const std::vector<Premier>& criblage){
   std::vector<int> tab;
   for(size_t i = 0; i < criblage.size(); ++i){
      if(criblage.at(i) == Premier::premier){
         tab.push_back((int)i);
      }
   }
   return tab;
}