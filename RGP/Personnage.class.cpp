#include "Personnage.class.hpp"

Personnage::Personnage() : m_vie(100), m_mana(100)
{
   
}

Personnage::Personnage(std::string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{

}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
        m_vie = 0;
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if (m_vie > 100)
        m_vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant()
{
    return m_vie > 0; // Renvoie true si m_vie > 0 et false sinon;
}

void Personnage::afficherEtat() const
{
    std::cout << "Vie : " << m_vie << std::endl;
    std::cout << "Mana : " << m_mana << std::endl;
    m_arme.afficher();
}