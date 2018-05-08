#include "Inventaire.hpp"

std::ostream& operator << (std::ostream& flux, const Inventaire& inventaire) {

    for(Bouteille bouteille : inventaire._bouteilles) {
        flux << bouteille << "\n";
    }

    return flux;

}
