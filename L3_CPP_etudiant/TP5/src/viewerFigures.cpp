#include <iostream>
#include "viewerFigures.hpp"

ViewerFigures::ViewerFigures(int argc, char ** argv) : _kit(argc, argv) {

    _window.set_title("Fenetre");
    _window.set_default_size(640, 480);
    _window.show_all();

}

void ViewerFigures::run() {
    Gtk::Main::run(_window);
}
