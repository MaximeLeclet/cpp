#ifndef LIGNE_HPP
#define LIGNE_HPP
#include "figureGeometrique.hpp"
#include "point.hpp"

class Ligne : public FigureGeometrique {

private:
    Point _p0, _p1;

public:
    Ligne(const Couleur & couleur, const Point & p0, const Point & p1);
    virtual void afficher(const Cairo::RefPtr<Cairo::Context>& context) const;
    const Point & getP0();
    const Point & getP1();
};

#endif
