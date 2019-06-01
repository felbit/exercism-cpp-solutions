#include "grains.h"

namespace grains
{

    ull square(unsigned short _square)
    {
        if (_square == 1)
            return 1ULL;
        else
            return 2 * square(_square - 1);
    }

    ull total()
    {
        ull _total = 0;
        for (int it = 64; it > 0; --it)
        {
            _total += square(it);
        }
        return _total;
    }

}