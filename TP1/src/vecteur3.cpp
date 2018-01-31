#include "vecteur3.hpp"

void afficher(Vecteur3& v) {
  std::cout << "(" << v.x << ", " << v.y << ", " << v.z << ")" << std::endl;
}

void Vecteur3::afficher() {
  std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

float produitScalaire(Vecteur3& a, Vecteur3& b) {
  return a.x*b.x + a.y*b.y + a.z*b.z;
}

Vecteur3 addition(Vecteur3& a, Vecteur3& b) {
  return Vecteur3{a.x+b.x, a.y+b.y, a.z+b.z};
}
