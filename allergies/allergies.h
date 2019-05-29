#pragma once
#include <string>

namespace allergies
{
    class allergy_test
    {
    public:
        allergy_test(int score) : m_score(score) {}
        bool is_allergic_to(std::string);

    private:
        int m_score;
    };
}