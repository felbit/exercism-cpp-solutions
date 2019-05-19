#pragma once
#include <cstdlib>
#include <map>
#include <string>

#define ull unsigned long long int

namespace say {

    std::map<ull, std::string> lookup {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"},
        {10, "ten"}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"}, {18, "eightteen"}, {19, "nineteen"},
        {20, "twenty"}, {30, "thirty"}, {40, "forty"}, {50, "fifty"}, {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"},
    };

    std::string build_number_string(ull number)
    {
        if (number <= 20) {
            return lookup.at(number);
        } else {
            ull tys = (number / 10) * 10;
            ull n_n = number % 10;

            return lookup.at(tys) + "-" + lookup.at(n_n);
        }
    }

    std::string in_english(ull n)
    {
        std::string number = build_number_string(n);
        std::string saying = "say " + number;

        std::system(saying.c_str());

        return number;
    }
}
