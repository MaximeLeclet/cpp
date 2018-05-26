#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include "polygoneRegulier.hpp"

PolygoneRegulier::PolygoneRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes) : FigureGeometrique(couleur), _nbPoints(nbCotes), _points(new Point[nbCotes]) {

    for(int i = 0; i < _nbPoints; i++) {

        _points[i]._x = centre._x + rayon * std::cos(2 * M_PI/_nbPoints);
        _points[i]._y = centre._y + rayon * std::sin(2 * M_PI/_nbPoints);

    }

}

void PolygoneRegulier::afficher(const Cairo::RefPtr<Cairo::Context>& context) const {
    std::string affichage = "PolygoneRegulier " + std::to_string(_couleur._r) + "_" + std::to_string(_couleur._g) + "_" + std::to_string(_couleur._b) + " ";

    context->set_source_rgb(1.0, 0.0, 0.0);
    context->set_line_width(100.0);
    context->move_to(_points[0]._x, _points[0]._y);

    for(int i = 0; i < _nbPoints; i++) {

        affichage += std::to_string(_points[i]._x) + "_" + std::to_string(_points[i]._y) + " ";
        context->line_to(_points[i]._x, _points[i]._y);

    }

    std::cout << affichage << std::endl;
    context->line_to(_points[0]._x, _points[0]._y);

}

int PolygoneRegulier::getNbPoints() const {
    return _nbPoints;
}

const Point & PolygoneRegulier::getPoint(int indice) const {
    return _points[indice];
}
