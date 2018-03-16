#include <iostream>
#include "figureGeometrique.hpp"
#include "ligne.hpp"
#include "polygoneRegulier.hpp"
#include <vector>

int main() {

    std::vector<FigureGeometrique *> figures;

    figures.push_back(new Ligne(Couleur{0, 0, 0}, Point{1,2}, Point{2, 3}));
    figures.push_back(new PolygoneRegulier(Couleur{0, 0, 0}, Point{1, 2}, 100, 6));
    figures.push_back(new Ligne(Couleur{0, 0, 0}, Point{1,2}, Point{2, 3}));
    figures.push_back(new PolygoneRegulier(Couleur{0, 0, 0}, Point{1, 2}, 100, 6));
    figures.push_back(new Ligne(Couleur{0, 0, 0}, Point{1,2}, Point{2, 3}));

    for(FigureGeometrique* figure: figures){
       figure->afficher();
     }

    for(auto figure: figures) delete figure;

}
