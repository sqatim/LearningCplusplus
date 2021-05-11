#include "main.hpp"

bool operator==(Duration const& a, Duration const& b)
{
    return (a.estEgal(b));
}

bool operator!=(Duration const& a, Duration const& b)
{   
    return !(a == b);
}

int main()
{
    Duration duree1(0, 15, 2), duree2(0, 15, 2);
     if (duree1 != duree2)
        std:: cout << "Les durees sont differentes" << std::endl;
    else
        std:: cout << "Les durees sont identiques" << std::endl;
    
    // duree.afficher();
    return (0);
}