#ifndef IMAGE_HPP
#define IMAGE_HPP

class Image {

private:
    int _largeur;
    int _hauteur;
    int * _pixels;

public:
    Image(int largeur, int hauteur);
    Image(const Image & image);
    int getLargeur() const;
    int getHauteur() const;
    /*
    int getPixel(int i, int j) const;
    void setPixel(int i, int j, int couleur);
    */
    int getPixel(const int & i, const int & j) const;
    void setPixel(const int & i, const int & j, const int & couleur);
    void remplir(Image & img);
    void ecrirePnm(const Image& img, const std::string& nomFichier);
    Image bordure(const Image & img, int couleur, int epaisseur);
    ~Image();

};

#endif
