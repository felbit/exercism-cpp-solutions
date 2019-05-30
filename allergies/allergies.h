#pragma once

#include <map>
#include <string>
#include <unordered_set>

namespace allergies
{
    const std::map<std::string, unsigned short> allergenes {
        {"eggs", 1},
        {"peanuts", 2},
        {"shellfish", 4},
        {"strawberries", 8},
        {"tomatoes", 16},
        {"chocolate", 32},
        {"pollen", 64},
        {"cats", 128}
    };

    class allergy_test
    {
    public:
        allergy_test(unsigned short score) : m_score(score) {}
        auto is_allergic_to(const std::string&) const -> bool;
        auto get_allergies() const -> std::unordered_set<std::string>;

    private:
        int m_score;
    };

} // namespace allergies
