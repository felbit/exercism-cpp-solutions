#include <map>
#include <algorithm>
#include <string>
#include <vector>

namespace grade_school {

    class school {
    public:
        school() {}
        auto roster(void) -> std::map<int, std::vector<std::string>> const;
        auto grade(int) -> std::vector<std::string> const;
        void add(std::string, int);

    private:
        std::map<int, std::vector<std::string>> m_roster;
    };

}