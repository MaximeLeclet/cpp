#include <iostream>
#include <algorithm>
#include <fstream>
#include "bibliotheque.hpp"

void Bibliotheque::afficher() const {

    for(int i = 0; i < size(); i++){

        std::cout << operator[](i) << std::endl;

    }

}


void Bibliotheque::trierParAnnee() {

    auto fot = [](const Livre & l1, const Livre & l2) {
        return l1.getAnnee() < l2.getAnnee();
    }

    std::sort(begin(), end(), fot);

}

void Bibliotheque::trierParAuteurEtTitre() {

    std::sort(begin(), end(), *this);

}

void Bibliotheque::lireFichier(const std::string & nomFichier) {

    std::ifstream if (nomFichier);

    while (not if.eof()) {

        Livre l;
        if >> l;
        push_back(l);

    }

}

void Bibliotheque::ecrireFichier(const std::string & nomFichier) const {

  std::ofstream of (nomFichier);

  for(int i; i < size(); i++){

    of << operator[](i) << std::endl;

  }

}
