#ifndef ZONE_DESSIN_HPP
#define ZONE_DESSIN_HPP
#include "figureGeometrique.hpp"
#include <vector>
#include <gtkmm.h>

class ZoneDessin : public Gtk::DrawingArea {

private:
    std::vector<FigureGeometrique *> _figures;

public:
    ZoneDessin();
    ~ZoneDessin();

protected:
    bool on_expose_event(GdkEventExpose * event);
    bool gererClic(GdkEventButton * event);

};

#endif
