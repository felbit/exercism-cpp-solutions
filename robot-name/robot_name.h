#pragma once
#include <cstdlib>
#include <ctime>
#include <random>
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
    };
} // namespace robot_name