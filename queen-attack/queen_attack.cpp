#include "queen_attack.h"

namespace queen_attack
{
    chess_board::chess_board() : m_white(0, 3), m_black(7, 3) {}
    chess_board::chess_board(const std::pair<int, int> &white, const std::pair<int, int> &black) : m_white(white), m_black(black)
    {
        if (m_white == m_black) 
            throw std::domain_error("The two queens cannot stand on the same position.");
    }

    std::pair<int, int> chess_board::black(void) const
    {
        return m_black;
    }

    std::pair<int, int> chess_board::white(void) const
    {
        return m_white;
    }

}