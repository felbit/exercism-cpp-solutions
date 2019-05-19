#include <stdexcept>
#include <string>
#include <utility>

namespace queen_attack
{

    class chess_board
    {
    public:
        // Constructors
        chess_board();
        chess_board(const std::pair<int, int>&, const std::pair<int, int>&);
        
        // Getter
        auto black(void) const -> std::pair<int, int>;
        auto white(void) const -> std::pair<int, int>;

        bool can_attack() const;

        // static_cast<std::string> operator
        operator std::string() const
        {
            std::string board = "";

            for (int i = 0; i < 8; ++i) {
                for (int j = 0; j < 8; ++j) {
                    if (std::make_pair(i, j) == m_white) {
                        board += "W";
                    } else if (std::make_pair(i, j) == m_black) {
                        board += "B";
                    } else {
                        board += "_";
                    }

                    if (j < 7) board += " ";
                }
                board += "\n";
            }

            return board;
        }

    private:
        const std::pair<int, int> m_white;
        const std::pair<int, int> m_black;
    };

}