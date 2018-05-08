#include <iostream>
#include "bibliotheque.hpp"

void Bibliotheque::afficher() const {

}

void Bibliotheque::trierParAnnee() {

    auto fot = [](const Livre & l1, const Livre & l2) {
        return l1.getAnnee() < l2.getAnnee();
    }

    std::sort(begin(), end(), fot);

}
