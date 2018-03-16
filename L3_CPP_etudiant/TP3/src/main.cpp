#include <iostream>
#include "location.hpp"
#include "client.hpp"
#include "produit.hpp"
#include "magasin.hpp"

int main() {

  Location l {0, 2};
  //l.afficherLocation();

  Client c (42, "toto");
  //c.afficherClient();

  Produit p (45, "Bouteille");
  //p.afficherProduit();

  Magasin m;
  
  //m.afficherClients();
  m.ajouterClient("Maxime");
  m.ajouterClient("Quentin");

  m.ajouterProduit("Bouteille");
  m.ajouterProduit("Hamburger");

  std::cout << m.trouverClientDansLocation(0) << std::endl;

}
