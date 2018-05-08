#include <iostream>
#include "image.hpp"
#include <cmath>
#include <string>

Image::Image(int largeur, int hauteur) : _largeur(largeur), _hauteur(hauteur) {}

Image::Image(const Image & image)
: _largeur(image.getLargeur), _hauteur(image.getHauteur)
{

    for(int i = 0; i < image.getHauteur(); i++) {

        for(int j = 0; j < image.getLargeur(); i++) {

            setPixel(i, j, image.getPixel(i, j));

        }

    }

}

int Image::getLargeur() const {
    return _largeur;
}

int Image::getHauteur() const {
    return _hauteur;
}

/*
int Image::getPixel(int i, int j) const {
    return _pixels[_largeur * i + j];
}

void Image::setPixel(int i, int j, int couleur) {
    _pixels[_largeur * i + j] = couleur;
}
*/

int Image::getPixel(const int & i, const int & j) const {
    return _pixels[_largeur * i + j];
}

void Image::setPixel(const int & i, const int & j, const int & couleur) {
    _pixels[_largeur * i + j] = couleur;
}

void Image::remplir(Image & img) {

    for(int i = 0; i < img.getHauteur(); i++){

        for(int j = 0; j < img.getLargeur(); j++){

            double cosVal = ((std::cos((float)j / 10) + 1)/2)*255;
            img.setPixel(i, j, std::floor(cosVal));

        }

    }

}

void Image::ecrirePnm(const Image& img, const std::string& nomFichier) {

    std::ofstream fichier(nomFichier, std::ofstream::out);

    int largeur = img.getLargeur();
    int hauteur = img.getHauteur();

    fichier << "P2" << std::endl;
    fichier << largeur << " " << hauteur << std::endl;
    fichier << "255" << std::endl;

    for(int i = 0; i < hauteur; i++){

        for(int j = 0; j < largeur; j++){

            fichier << img.getPixel(i, j) << " ";

        }

        fichier << std::endl;

    }

}

Image Image::bordure(const Image & img, int couleur, int epaisseur) {

    Image newImage(img);

    for(int i = 0; i < img.getHauteur(); i++) {

        for(int j = 0; j < img.getLargeur(); i++) {

            if(i <= epaisseur || i >= (img.getHauteur() - epaisseur) || j <= epaisseur || j => (img.getLargeur() - epaisseur)) {

                newImage.setPixel(i, j, couleur);

            } else {

                newImage.setPixel(i, j, img.getPixel(i, j));

            }

        }

    }

    return newImage;

}

Image::~Image() {
    delete _pixels[];
}
