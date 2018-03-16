#include <iostream>
#include "location.hpp"

void Location::afficherLocation() const {

  std::cout << "Location (" << Location::_idClient << ", " << Location::_idProduit << ")" << std::endl;

}
