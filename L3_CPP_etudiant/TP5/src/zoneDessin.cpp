#include <iostream>
#include <gtkmm.h>
#include <cairo.h>
#include "zoneDessin.hpp"
#include "polygoneRegulier.hpp"
#include "ligne.hpp"

ZoneDessin::ZoneDessin() {

    add_events(Gdk::BUTTON_PRESS_MASK);

    signal_button_press_event().connect(sigc::mem_fun(*this, &ZoneDessin::gererClic));

    //_figures.push_back(new Ligne(Couleur{0, 0, 0}, Point{1,2}, Point{2, 3}));
    //_figures.push_back(new PolygoneRegulier(Couleur{0, 0, 0}, Point{1, 2}, 100, 6));
    //_figures.push_back(new Ligne(Couleur{0, 0, 0}, Point{1,2}, Point{2, 3}));

}

ZoneDessin::~ZoneDessin() {

     for(auto figure: _figures) delete figure;

}

bool ZoneDessin::on_expose_event(GdkEventExpose * event) {

    //for(auto figure: _figures) figure->afficher();

    Glib::RefPtr<Gdk::Window> window = get_window();

    if (window) {

        Cairo::RefPtr<Cairo::Context> context = window->create_cairo_context();

        for(auto figure: _figures) figure->afficher(context);

        context->stroke();

    }

    return true;

}

bool ZoneDessin::gererClic(GdkEventButton* event) {

    Glib::RefPtr<Gdk::Window> window = get_window();

    if(window){

        if(event->button == 1) {

          _figures.push_back(new PolygoneRegulier(Couleur{0.8,1,0}, Point{std::floor(event->x), std::floor(event->y)}, std::rand() % 100 + 20, std::rand() % 10 + 3));

        } else if(event->button == 3) {

          if(_figures.size() > 0) _figures.pop_back();

        }

        window->invalidate(true);

    }

    return true;

}
