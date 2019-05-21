#include "robot_name.h"

#include <iostream>

namespace robot_name
{
    robot::robot()
    {
        // seeding the random number generator
        std::srand(static_cast<int>(time(0)));

        std::string name(5, '0');

        name[0] = 'A' + std::rand() % 26;
        name[1] = 'A' + std::rand() % 26;
        name[2] = '0' + std::rand() % 10;
        name[3] = '0' + std::rand() % 10;
        name[4] = '0' + std::rand() % 10;

        m_robot_name = name;
    }

    std::string robot::name() const
    {
        return m_robot_name;
    }

    void robot::reset()
    {
        // foo
    }

} // namespace robot_name
