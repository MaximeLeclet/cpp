#ifndef LISTE_HPP
#define LISTE_HPP

struct Noeud {

  int _valeur;
  Noeud * _suivant;

};

struct Liste {

  Noeud * _tete;

  Liste();

  void ajouterDevant(int valeur);

  int getTaille() const;

  int getElement(int indice) const;
  
};

#endif
