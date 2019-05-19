#pragma once

namespace space_age {
    
    class space_age {
    public:
        space_age(unsigned long long int);
        
        unsigned long long int seconds() const;
        
        double on_earth() const;
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
    
    private:
        unsigned long long int m_seconds;
    };

}