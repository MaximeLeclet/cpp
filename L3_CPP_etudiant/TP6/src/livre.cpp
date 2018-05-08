#include "livre.hpp"
#include <iostream>

Livre::Livre(const std::string & titre, const std::string & auteur, int annee) : _annee(annee) {

    if(titre.find(";") != str::string::npos and titre.find("\n") != str::string::npos) {
        throw 1338;
    }
    else {
        _titre(titre);
    }

    if(auteur.find(";") != str::string::npos and auteur.find("\n") != str::string::npos) {
        throw 1338;
    }
    else {
        _auteur(auteur);
    }

}

const std::string & Livre::getTitre() const {
    return _titre;
}

const std::string & Livre::getAuteur() const {
    return _auteur;
}

int Livre::getAnnee() const {
    return _annee;
}

bool Livre::operator<(const Livre & livre) {

    if(_auteur < livre.getAuteur()) {
        return true;
    }
    else if(_auteur > livre.getAuteur()) {
        return false;
    }
    else if(_auteur == livre.getAuteur()) {

        if(_titre < livre.getTitre()) {
            return true
        }
        else {
            return false;
        }

    }

}

bool Livre::operator==(const & Livre livre) {
    return(_auteur == livre.getAuteur() and _annee == livre.getAnnee() and _titre == livre.getTitre())
}

std::ostream& Livre::operator<<(std::ostream& flux, const Livre& livre){
    flux << livre.getTitre() << ";" << livre.getAuteur() << ";" << livre.getAnnee();
    return flux;
}

std::istream& Livre::operator>>(std::istream& flux, Livre& livre){
    std::string line;
    std::getline(flux, line);
    std::istringstream iss(line);
    std::string token;
    std::getline(iss, token, ';');
    livre._titre = token;
    std::getline(iss, token, ';');
    livre._auteur = token;
    iss >> livre._annee;
    return flux;
}
