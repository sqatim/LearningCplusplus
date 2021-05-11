#include "Duration.class.hpp"

Duration::Duration(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_seconds(secondes)
{
    if(secondes >= 60)
    {
        minutes = minutes + (secondes / 60);
        m_seconds =  secondes % 60; 
    }
    if(minutes >= 60)
    {
        m_heures = heures + (minutes / 60);
        m_minutes =  minutes % 60; 
    }
}

void Duration::afficher()
{
        std::cout << "heurs : " << m_heures << " | minutes : " << m_minutes << " | seconds : " << m_seconds << std::endl;
}

bool Duration::estEgal(Duration const& b) const
{
    return (m_heures == b.m_heures && \
        m_minutes == b.m_minutes && m_seconds == b.m_seconds);
}