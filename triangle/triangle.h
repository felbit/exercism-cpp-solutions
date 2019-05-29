#pragma once
#include <stdexcept>

namespace triangle
{
    enum class flavor
    {
        equilateral,
        isosceles,
        scalene
    };

    template<class Size>
    bool is_triangle(Size a, Size b, Size c)
    {
        return (a + b > c) && (a + c > b) && (b + c > a)
            && (a > 0) && (b > 0) && (c > 0);
    }

    template<class Size>
    flavor kind(Size a, Size b, Size c)
    {
        if (! is_triangle(a, b, c)) throw std::domain_error("Not a valid triangle.");
        if (a == b && b == c)
        {
            return flavor::equilateral;
        }
        else if (a == b || b == c || a == c)
        {
            return flavor::isosceles;
        }
        else
        {
            return flavor::scalene;
        }
    }
}