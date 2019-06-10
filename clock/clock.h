#pragma once

#include <string>

namespace date_independent
{
    inline namespace clock
    {

        std::string format(int n)
        {
            return n < 10 ? "0" + std::to_string(n) : std::to_string(n);
        }

        std::string at(int hours, int minutes)
        {
            hours = (hours + minutes / 60) % 24;
            minutes %= 60;
            return format(hours) + ":" + format(minutes);
        }

    }
}