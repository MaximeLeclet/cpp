#include <iostream>
#include "zoneDessin.hpp"
#include "polygoneRegulier.hpp"
#include "ligne.hpp"

ZoneDessin::ZoneDessin() {

    _figures.push_back(new Ligne(Couleur{0, 0, 0}, Point{1,2}, Point{2, 3}));
    _figures.push_back(new PolygoneRegulier(Couleur{0, 0, 0}, Point{1, 2}, 100, 6));
    _figures.push_back(new Ligne(Couleur{0, 0, 0}, Point{1,2}, Point{2, 3}));

}

ZoneDessin::~ZoneDessin() {

     for(auto figure: _figures) delete figure;

}

bool ZoneDessin::on_expose_event(GdkEventExpose * event) {

    for(auto figure: _figures) figure->afficher();

}
