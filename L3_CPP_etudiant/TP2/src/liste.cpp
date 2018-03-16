#include <iostream>
#include "liste.hpp"

Liste::Liste() {

  _tete = nullptr;

}

void Liste::ajouterDevant(int valeur) {

  Noeud * nouveauNoeud = new Noeud{valeur, _tete};
  _tete = nouveauNoeud;

}

int Liste::getTaille() const {

  Noeud * suivant = _tete;
  int taille = 0;
  
  while(suivant != nullptr) {

    taille++;
    suivant = suivant->_suivant;

  }

  return taille;

}

int Liste::getElement(int indice) const {

  Noeud * suivant = _tete;
  int i = 0;
  
  while(suivant != nullptr) {

    if(i == indice) {

      return suivant->_valeur;

    }
    
    i++;
    suivant = suivant->_suivant;

  }

  return 0;

}
