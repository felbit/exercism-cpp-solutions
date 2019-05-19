#include "hamming.h"

namespace hamming
{
    int compute(const std::string& dna1, const std::string& dna2)
    {
        if (dna1.length() != dna2.length())
            throw std::domain_error("Please enter two strings with equal length.");

        int distance = 0;
        for (size_t i = 0; i < dna1.length(); ++i)
            if (dna1[i] != dna2[i])
                distance++;

        return distance;
    }
} // namespace hamming