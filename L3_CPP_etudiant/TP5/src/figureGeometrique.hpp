#ifndef FIGURE_GEOMETRIQUE_HPP
#define FIGURE_GEOMETRIQUE_HPP
#include "couleur.hpp"
#include <gtkmm.h>
#include <cairo.h>

class FigureGeometrique{

protected:
    Couleur _couleur;

public:
    FigureGeometrique(const Couleur & couleur);
    const Couleur & getCouleur() const;
    virtual void afficher(const Cairo::RefPtr<Cairo::Context>& context) const = 0;
};

#endif
