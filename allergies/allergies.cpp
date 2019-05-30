#include "allergies.h"

namespace allergies
{

    bool allergy_test::is_allergic_to(const std::string& allergene) const
    {
        unsigned short alg = allergenes.at(allergene);
        return ((alg & m_score) == alg);
    }

    std::unordered_set<std::string> allergy_test::get_allergies() const
    {
        std::unordered_set<std::string> allergies;

        for (const std::pair<std::string, int>& allergene : allergenes)
        {
            if ((allergene.second & m_score) == allergene.second)
                allergies.insert(allergene.first);
        }

        return allergies;
    }

} // namespace allergies
