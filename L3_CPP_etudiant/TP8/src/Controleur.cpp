#include "Controleur.hpp"

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc, char ** argv) {
    //_inventaire._bouteilles.push_back(Bouteille{"test", "2018-04-19", 0.75});
    chargerInventaire();
    _vues.push_back(std::make_unique<VueConsole>(*this));
    _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
}

std::string Controleur::getTexte() {
    std::ostringstream oss;
    oss << _inventaire;
    return oss.str();
}

void Controleur::chargerInventaire() {

    //ifstream file(nomFichier);

    //_inventaire._bouteilles.push_back(Bouteille{"test", "2018-04-19", 0.75});
    actualiser();
}

void Controleur::actualiser() {
    for (auto & v : _vues)
        v->actualiser();
}

void Controleur::run() {
    for (auto & v : _vues)
        v->run();
}
