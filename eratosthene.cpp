//---------------------------------------------------------
// Fichier        : eratosthene.cpp
// Auteur(s)      : Pollien Lionel & Vasques Dario
// But            : Fichier contenant l'algorithme de criblage
//                  et de récupération des nombres premiers.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Lionel)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#include "eratosthene.h"

std::vector<Premier> criblage(std::vector<Premier>& tab){
   //boucle for pour itérer sur le tableau
   for(size_t i = 0; i < tab.size(); ++i){
       //0 et 1 ne sont pas considérés comme des nombres premiers
       if(i == 0 || i == 1){
          tab.at(i) = Premier::pasPremier;
       }
       //Si tab[i] est premier, on va de nouveau itérer sur le tableau
       //et modifier les valeurs qui sont "premier" et modulo i == 0,
       //car ce ne sont pas des nombres premiers
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
    //boucle for pour itérer sur le tableau criblé
    for(size_t i = 0; i < criblage.size(); ++i){
       //Si la valeur de criblage[i] est un premier,
       //on l'ajoute dans le vecteur tab
       if(criblage.at(i) == Premier::premier){
          tab.push_back((int)i);
       }
    }
    return tab;
}