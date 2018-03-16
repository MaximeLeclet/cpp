#include <iostream>
#include "magasin.hpp"

Magasin::Magasin() : _idCourantClient(0), _idCourantProduit(0) {};

int Magasin::nbClients() const {
  return _clients.size();
}

void Magasin::ajouterClient(const std::string & nom) {
  Client newClient (_idCourantClient, nom);
  _clients.push_back(newClient);
  _idCourantClient++;
}

void Magasin::afficherClients() const {
  for(unsigned i = 0; i < _clients.size(); i++) {
      _clients[i].afficherClient();
  }
}

void Magasin::supprimerClient(int idClient) {
  try{
    for(unsigned i = 0; i < _clients.size(); i++) {
      if(_clients[i].getId() == idClient) {
        std::swap(_clients[i], _clients.back());
        _clients.pop_back();
        return;
      }
    }
    throw std::string("Erreur : ce client n'existe pas");
  } catch(const std::string & e) {
    std::cout << e << std::endl;
  }
}

int Magasin::nbProduits() const {
  return _produits.size();
}

void Magasin::ajouterProduit(const std::string & nom) {
  Produit newProduit (_idCourantProduit, nom);
  _produits.push_back(newProduit);
  _idCourantProduit++;
}

void Magasin::afficherProduits() const {
  for(unsigned i = 0; i < _produits.size(); i++) {
      _produits[i].afficherProduit();
  }
}

void Magasin::supprimerProduit(int idProduit) {
  try {
    for(unsigned i = 0; i < _produits.size(); i++) {
      if(_produits[i].getId() == idProduit) {
        std::swap(_produits[i], _produits.back());
        _produits.pop_back();
        return;
      }
    }
    throw std::string("Erreur : ce produit n'existe pas");
  } catch(const std::string & e) {
    std::cout << e << std::endl;
  }
}

int Magasin::nbLocations() const {
  return _locations.size();
}

void Magasin::ajouterLocation(int idClient, int idProduit) {
  Location newLocation {idClient, idProduit};
  _locations.push_back(newLocation);
}

void Magasin::afficherLocations() const {
  for(unsigned i = 0; i < _locations.size(); i++) {
    _locations[i].afficherLocation();
  }
}

void Magasin::supprimerLocation(int idClient, int idProduit) {
  for(unsigned i = 0; i < _locations.size(); i++) {
    if(_locations[i]._idClient == idClient && _locations[i]._idProduit == idProduit) {
      std::swap(_locations[i], _locations.back());
      _locations.pop_back();
    }
  }
}

bool Magasin::trouverClientDansLocation(int idClient) const {
  for(unsigned i = 0; i < _locations.size(); i++) {
    if(_locations[i]._idClient == idClient) {
      return true;
    }
  }
  return false;
}

std::vector<int> Magasin::calculerClientsLibres() const {

    std::vector<int> clientsLibres;
    bool possedeLocation;

    for(unsigned i = 0; i < _clients.size(); i++) {

        possedeLocation = false;

        for(unsigned j = 0; j < _locations.size(); j++) {

            if(_clients[i].getId() == _locations[j]._idClient) {

                possedeLocation = true;

            }

        }

        if(possedeLocation) {

            clientsLibres.push_back(_clients[i].getId());

        }

    }

    return clientsLibres;

}

bool Magasin::trouverProduitDansLocation(int idProduit) const {
    for(unsigned i = 0; i < _locations.size(); i++) {
      if(_locations[i]._idProduit == idProduit) {
        return true;
      }
    }
    return false;
}

std::vector<int> Magasin::calculerProduitsLibres() const {

    std::vector<int> produitsLibres;
    bool possedeLocation;

    for(unsigned i = 0; i < _produits.size(); i++) {

        possedeLocation = false;

        for(unsigned j = 0; j < _locations.size(); j++) {

            if(_produits[i].getId() == _locations[j]._idProduit) {

                possedeLocation = true;

            }

        }

        if(possedeLocation) {

            produitsLibres.push_back(_produits[i].getId());

        }

    }

    return produitsLibres;

}
