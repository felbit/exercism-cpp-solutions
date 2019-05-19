#include "nucleotide_count.h"

namespace dna
{

    counter::counter(const std::string dna) {
        for (char nucleotide : dna)
            check_nucleotide_validity(nucleotide);

        m_dna = dna;
    }

    std::map<char, int> counter::nucleotide_counts(void) const
    {
        std::map<char, int> result;
        
        for (char c : m_nucleotides)
            result.insert(std::pair<char, int>(c, count(c)));

        return result;
    }

    unsigned int counter::count(char nucleotide) const
    {
        check_nucleotide_validity(nucleotide);

        unsigned int result = 0;
        for (char c : m_dna)
            if (c == nucleotide)
                result++;
        
        return result;
    }

    void counter::check_nucleotide_validity(char nucleotide) const
    {
        if (m_nucleotides.find(nucleotide) > 3)
            throw std::invalid_argument("Nucleotides are 'A', 'T', 'G' or 'C'.");
    }

}