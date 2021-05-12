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

bool Duration::estPlusPetitQue(Duration const& b) const
{
    if (m_heures < b.m_heures)
        return (true);
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
        return (true);
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes \
            && m_seconds < b.m_seconds)
        return (true);
    else
        return (false);
}

bool Duration::estPlusGrandQue(Duration const& b) const
{
    if (m_heures > b.m_heures)
        return (true);
    else if (m_heures == b.m_heures && m_minutes > b.m_minutes)
        return (true);
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes \
            && m_seconds > b.m_seconds)
        return (true);
    else
        return (false);
}

bool Duration::estPlusPetitOuEgual(Duration const& b) const
{
     if (m_heures < b.m_heures)
        return (true);
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
        return (true);
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes \
            && m_seconds <= b.m_seconds)
        return (true);
    else
        return (false);
}

bool Duration::estPlusGrandOuEgual(Duration const& b) const
{
     if (m_heures > b.m_heures)
        return (true);
    else if (m_heures == b.m_heures && m_minutes > b.m_minutes)
        return (true);
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes \
            && m_seconds >= b.m_seconds)
        return (true);
    else
        return (false);
}

Duration& Duration::operator+=(Duration const& a)
{
    m_seconds += a.m_seconds;
    if(m_seconds >= 60)
    {
        m_minutes = m_minutes + (m_seconds / 60);
        m_seconds %= 60;
    }
    m_minutes += a.m_minutes; 
    if(m_minutes >= 60)
    {
        m_heures = m_heures + (m_minutes / 60);
        m_minutes %= 60;
    }
    m_heures += a.m_heures;
    return *this;
}

Duration& Duration::operator-=(Duration const& a)
{
    m_seconds -= a.m_seconds;
    if(m_seconds < 0)
        m_seconds = 0;
    m_minutes -= a.m_minutes; 
    if(m_minutes < 0)
        m_minutes = 0;
    m_heures -= a.m_heures;
    if(m_minutes < 0)
        m_heures = 0;
    return *this;
}

void Duration::afficher(std::ostream &flux) const
{
    flux << m_heures << "h" << m_minutes << "min" << m_seconds << "s";
}