#include "rna_transcription.h"

namespace transcription {
    char to_rna(char dna)
    {
        switch (dna)
        {
        case 'C':
            return 'G';
        case 'G':
            return 'C';
        case 'A':
            return 'U';
        case 'T':
        default:
            return 'A';
            break;
        }
    }

    std::string to_rna(std::string str)
    {
        std::for_each(str.begin(), str.end(), [](char &c){ c = to_rna(c); });
        return str;
    }
}