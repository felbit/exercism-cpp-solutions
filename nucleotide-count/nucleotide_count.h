#include <map>
#include <stdexcept>
#include <string>

namespace dna {

    class counter {
    public:
        counter(std::string);
        std::map<char, int> nucleotide_counts(void) const;
        unsigned int count(char) const;
    
    private:
        std::string m_dna;
        const std::string m_nucleotides = "ATGC";

        void check_nucleotide_validity(char) const;
    };

}