#ifndef VIEWER_FIGURES_HPP
#define VIEWER_FIGURES_HPP
#include "zoneDessin.hpp"
#include <gtkmm.h>

class ViewerFigures {

private:
    Gtk::Main _kit;
    Gtk::Window _window;
    ZoneDessin _zoneDessin;

public:
    ViewerFigures(int argc, char ** argv);
    void run();

};

#endif
