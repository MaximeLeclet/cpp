#ifndef POLYGONE_REGULIER_HPP
#define POLYGONE_REGULIER_HPP
#include "figureGeometrique.hpp"
#include "point.hpp"

class PolygoneRegulier : public FigureGeometrique {

private:
    int _nbPoints;
    Point * _points;

public:
    PolygoneRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes);
    virtual void afficher() const;
    int getNbPoints() const;
    const Point & getPoint(int indice) const;
};

#endif
