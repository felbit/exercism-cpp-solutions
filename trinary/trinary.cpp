#include "trinary.h"

namespace trinary
{

    int to_decimal(const std::string _trinary)
    {
        try {
            int _tri_number = std::stoi(_trinary);
            int _reminder = 0;
            int _multiplier = 1;
            int _decimal = 0;

            while (_tri_number > 0)
            {
                _reminder = _tri_number % 10;
                _decimal = _decimal + _reminder * _multiplier;
                _tri_number /= 10;
                _multiplier *= 3;
            }

            return _decimal;
        } catch(const std::exception&) {
            return 0;
        }
    }

} // namespace trinary