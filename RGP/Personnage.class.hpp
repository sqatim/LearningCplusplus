#ifndef PERSONNAGE_CLASS_HPP
#define PERSONNAGE_CLASS_HPP

#include <string>
#include "Arme.class.hpp"

class Personnage
{
    public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat() const;
    // Attributs
    private:
    
    int m_vie;
    int m_mana;
    Arme m_arme;
};


#endif