#include "main.hpp"

bool operator==(Duration const& a, Duration const& b)
{
    return (a.estEgal(b));
}

bool operator!=(Duration const& a, Duration const& b)
{   
    return !(a == b);
}

bool operator<(Duration const& a, Duration const& b)
{
    return (a.estPlusPetitQue(b));
}

bool operator>(Duration const& a, Duration const& b)
{
    return (a.estPlusGrandQue(b));
}

bool operator<=(Duration const& a, Duration const &b)
{
    return (a.estPlusPetitOuEgual(b));
}

bool operator>=(Duration const& a, Duration const &b)
{
    return (a.estPlusGrandOuEgual(b));
}

Duration operator+(Duration const&a, Duration const& b)
{
    Duration copie(a);
    copie +=b;
    return copie;
}

Duration operator-(Duration const& a, Duration const& b)
{
    Duration copie(a);
    copie -= b;
    return (copie);
}

std::ostream& operator<<(std::ostream &flux, Duration const& duree)
{
    duree.afficher(flux);
    return flux;
}

int main()
{
    Duration duree1(1, 15, 1), duree2(1, 15, 2);
    //  if (duree1 != duree2)
    //     std:: cout << "Les durees sont differentes" << std::endl;
    // else
    //     std:: cout << "Les durees sont identiques" << std::endl;
    
    // if (duree1 < duree2)
    //     std::cout << "La premiere duree est plus petite" << std::endl;
    // else
    //     std::cout << "La premiere duree n'est pas plus petite" << std::endl;
    
    // if (duree1 >= duree2)
    //     std::cout << "La premiere duree est plus grant ou egual" << std::endl;
    // else
    //     std::cout << "La premiere duree n'est pas plus grand ou egual" << std::endl;

    // duree1-=duree2;
    // duree1.afficher();
    std::cout << duree1 << std::endl;
    return (0);
}