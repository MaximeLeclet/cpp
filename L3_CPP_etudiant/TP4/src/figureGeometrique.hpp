#ifndef FIGURE_GEOMETRIQUE_HPP
#define FIGURE_GEOMETRIQUE_HPP
#include "couleur.hpp"

class FigureGeometrique{

protected:
    Couleur _couleur;

public:
    FigureGeometrique(const Couleur & couleur);
    const Couleur & getCouleur() const;
    virtual void afficher() const = 0;
};

#endif
