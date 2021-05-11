#ifndef DURATION_CLASS_HPP
#define DURATION_CLASS_HPP

#include <iostream>
#include <string>

class Duration
{
    public:

    Duration(int heures = 0, int minutes = 0, int seconds = 0);
    void afficher();
    bool estEgal(Duration const& b) const;

    private:
    
    int m_heures;
    int m_minutes;
    int m_seconds;
};

#endif