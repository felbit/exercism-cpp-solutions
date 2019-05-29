#pragma once
#include <boost/date_time/gregorian/gregorian.hpp>

namespace meetup
{
    class scheduler
    {
    public:
        scheduler(boost::gregorian::date d) : m_date(d) {}
    private:
        const boost::gregorian::date m_date;
    };
}