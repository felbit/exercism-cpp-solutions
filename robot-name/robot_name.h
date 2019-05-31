#pragma once

#include <iomanip>
#include <random>
#include <sstream>
#include <stdexcept>
#include <string>

namespace robot_name
{

    class robot
    {
    public:
        robot(void);
        std::string name(void) const;
        void reset(void);

    private:
        std::string m_robot_name;

        std::string generate_name(void) const;
        std::string next_prefix(const std::string&) const;
    };

} // namespace robot_name