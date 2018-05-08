#include <iostream>
#include "figureGeometrique.hpp"
#include "ligne.hpp"
#include "polygoneRegulier.hpp"
#include "viewerFigures.hpp"
#include "zoneDessin.hpp"
#include <vector>

int main(int argc, char ** argv) {

    ViewerFigures viewerFigures(argc, argv);
    viewerFigures.run();

    ZoneDessin zoneDessin;
    

}
