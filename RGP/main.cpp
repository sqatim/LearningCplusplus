#include <iostream>
#include <string>
#include "Personnage.class.hpp"

int main()
{
    Personnage david, goliath("Épée aiguisée", 20);

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    std::cout << "David" << std::endl;
    david.afficherEtat();
    std::cout << std::endl << "Goliath" << std::endl;
    goliath.afficherEtat();

    return (0);
}