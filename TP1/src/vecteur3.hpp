#ifndef VECTEUR3
#define VECTEUR3

struct Vecteur3 {

  float x, y, z;

  void afficher() {

    std::out << "(" << x << ", " << y << ", " << z << ")" << std::endl;

  }

  float norme() {

    return std::sqrt(std::pow(x, 2.0) + std::pow(y, 2.0) + std::pow(z, 2.0));

  }

}

void afficher(Vecteur3&);
float produitScalaire(Vecteur3&, Vecteur3&);
Vecteur3 addition(Vecteur3&, Vecteur3&);

#enfdif
