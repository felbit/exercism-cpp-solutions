#include "space_age.h"

namespace space_age {
    space_age::space_age(unsigned long long int seconds) : m_seconds(seconds) {}

    unsigned long long int space_age::seconds() const
    {
        return m_seconds;
    }

    double space_age::on_earth() const
    {
        return m_seconds / 31557600.0;
    }

    double space_age::per_earth_years(double planet_years) const
    {
        return on_earth() / planet_years;
    }

    double space_age::on_mercury() const
    {
        return per_earth_years(0.2408467);
    }

    double space_age::on_venus() const
    {
        return per_earth_years(0.61519726);
    }
    
    double space_age::on_mars() const
    {
        return per_earth_years(1.8808158);
    }

    double space_age::on_jupiter() const
    {
        return per_earth_years(11.862615);
    }

    double space_age::on_saturn() const
    {
        return per_earth_years(29.447498);
    }

    double space_age::on_uranus() const
    {
        return per_earth_years(84.016846);
    }

    double space_age::on_neptune() const
    {
        return per_earth_years(164.79132);
    }

}