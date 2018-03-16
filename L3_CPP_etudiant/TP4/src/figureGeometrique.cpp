#include <iostream>
#include "figureGeometrique.hpp"

FigureGeometrique::FigureGeometrique(const Couleur & couleur) : _couleur(couleur) {}

const Couleur & FigureGeometrique::getCouleur() const {
    return _couleur;
}
