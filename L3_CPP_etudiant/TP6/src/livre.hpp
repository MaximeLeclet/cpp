#ifndef LIVRE_HPP
#define LIVRE_HPP

class Livre {

private:
    std::string _titre;
    std::string _auteur;
    int _annee;

public:
    Livre();
    Livre(const std::string & titre, const std::string & auteur, int annee);
    const std::string & getTitre() const;
    const std::string & getAuteur() const;
    int getAnnee() const;
    virtual bool operator<(const & Livre livre);
    bool operator==(const & Livre livre);
    std::ostream& operator<<(std::ostream& flux, const Livre& livre);
    std::istream& operator>>(std::istream& flux, Livre& livre);

};

#endif
