#include "grade_school.h"

namespace grade_school {

    auto school::roster(void) -> std::map<int, std::vector<std::string>> const
    {
        return m_roster;
    }

    auto school::grade(int grade) -> std::vector<std::string> const
    {
        std::vector<std::string> students;
        
        try{
            students = m_roster.at(grade);
        } catch(std::out_of_range) {
            // do nothing
        }

        return students;
    }

    void school::add(std::string name, int grade)
    {
        try {
            m_roster.at(grade).push_back(name);
            std::sort(m_roster.at(grade).begin(), m_roster.at(grade).end());

        } catch(std::out_of_range) {
            std::vector<std::string> students { name };
            m_roster.insert(std::pair<int, std::vector<std::string>>(grade, students));
        }
    }

}