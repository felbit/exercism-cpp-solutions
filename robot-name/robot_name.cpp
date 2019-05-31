#include "robot_name.h"

namespace robot_name
{
    robot::robot() : m_robot_name(generate_name()) {}

    std::string robot::name() const { return m_robot_name; }

    void robot::reset() { m_robot_name = generate_name(); }

    std::string robot::generate_name() const
    {
        static std::string prefix = "AA";
        static unsigned short unit_number = 0;

        std::ostringstream name;
        name << prefix << std::setw(3) << std::setfill('0') << unit_number;

        if (unit_number == 999) {
            prefix = next_prefix(prefix);
            unit_number = 0;
        } else {
            unit_number++;
        }

        return name.str();
    }

    std::string robot::next_prefix(const std::string& prefix) const
    {
        std::string tmp = prefix;
        const std::string letters {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

        if (prefix[1] == letters.back()) {
            if (prefix[0] == letters.back()) throw std::range_error("Prefix combinations exhausted.");
            tmp[0] = letters[letters.find(tmp[0]) + 1];
            tmp[1] = letters[0];
        } else {
            tmp[1] = letters[letters.find(tmp[1]) + 1];
        }

        return tmp;
    }

} // namespace robot_name
