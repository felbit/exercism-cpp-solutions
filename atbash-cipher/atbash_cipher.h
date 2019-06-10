#pragma once

#include <locale>
#include <string>

namespace atbash
{
    const std::string ALPHABET { "abcdefghijklmnopqrstuvwxyz123" };
    const std::string CYPHERBET { "zyxwvutsrqponmlkjihgfedcba123" };

    std::string encode(const std::string& text)
    {
        std::string cypher {};
        std::locale l;

        for (unsigned short it = 0; it < text.length(); ++it) {
            if (text[it] == ' ') continue;
            cypher.push_back(
                CYPHERBET[ALPHABET.find( std::tolower(text[it], l) )]
            );
        }

        for (unsigned short it = cypher.length() - 2; it > 0; --it) {
            if (it % 5 == 0) cypher.insert(it, " ");
        }

        return cypher;
    }
}