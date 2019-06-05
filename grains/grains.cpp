#include "grains.h"

namespace grains
{

    ull square(unsigned short _square)
    {
        return 1ULL << (_square - 1);
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