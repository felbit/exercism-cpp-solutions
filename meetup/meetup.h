#pragma once
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace boost::gregorian;

namespace meetup
{
    class scheduler
    {
    public:
        scheduler(const months_of_year month, const short year) : m_month(month), m_year(year) {}

        date monteenth() const { return next_teenth(Monday); }
        date tuesteenth() const { return next_teenth(Tuesday); }
        date wednesteenth() const { return next_teenth(Wednesday); }
        date thursteenth() const { return next_teenth(Thursday); }
        date friteenth() const { return next_teenth(Friday); }
        date saturteenth() const { return next_teenth(Saturday); }
        date sunteenth() const { return next_teenth(Sunday); }

        date first_monday() const { return first_of_month(Monday); }
        date first_tuesday() const { return first_of_month(Tuesday); }
        date first_wednesday() const { return first_of_month(Wednesday); }
        date first_thursday() const { return first_of_month(Thursday); }
        date first_friday() const { return first_of_month(Friday); }
        date first_saturday() const { return first_of_month(Saturday); }
        date first_sunday() const { return first_of_month(Sunday); }

        date second_monday() const { return second_of_month(Monday); }
        date second_tuesday() const { return second_of_month(Tuesday); }
        date second_wednesday() const { return second_of_month(Wednesday); }
        date second_thursday() const { return second_of_month(Thursday); }
        date second_friday() const { return second_of_month(Friday); }
        date second_saturday() const { return second_of_month(Saturday); }
        date second_sunday() const { return second_of_month(Sunday); }

        date third_monday() const { return third_of_month(Monday); }
        date third_tuesday() const { return third_of_month(Tuesday); }
        date third_wednesday() const { return third_of_month(Wednesday); }
        date third_thursday() const { return third_of_month(Thursday); }
        date third_friday() const { return third_of_month(Friday); }
        date third_saturday() const { return third_of_month(Saturday); }
        date third_sunday() const { return third_of_month(Sunday); }

        date fourth_monday() const { return fourth_of_month(Monday); }
        date fourth_tuesday() const { return fourth_of_month(Tuesday); }
        date fourth_wednesday() const { return fourth_of_month(Wednesday); }
        date fourth_thursday() const { return fourth_of_month(Thursday); }
        date fourth_friday() const { return fourth_of_month(Friday); }
        date fourth_saturday() const { return fourth_of_month(Saturday); }
        date fourth_sunday() const { return fourth_of_month(Sunday); }

        date last_monday() const { return last_of_month(Monday); }
        date last_tuesday() const { return last_of_month(Tuesday); }
        date last_wednesday() const { return last_of_month(Wednesday); }
        date last_thursday() const { return last_of_month(Thursday); }
        date last_friday() const { return last_of_month(Friday); }
        date last_saturday() const { return last_of_month(Saturday); }
        date last_sunday() const { return last_of_month(Sunday); }

    private:
        const months_of_year m_month;
        const short m_year;

        date begin_of_month() const
        {
            return date(m_year, m_month, 1);
        }

        date last_of_month() const
        {
            return date(m_year, m_month, 1).end_of_month();
        }

        date first_of_month(boost::date_time::weekdays weekday) const
        {
            return next_weekday(begin_of_month(), greg_weekday(weekday));
        }

        date second_of_month(boost::date_time::weekdays weekday) const
        {
            date_duration one_week {7};
            return first_of_month(weekday) + one_week;
        }

        date third_of_month(boost::date_time::weekdays weekday) const
        {
            date_duration two_weeks {14};
            return first_of_month(weekday) + two_weeks;
        }

        date fourth_of_month(boost::date_time::weekdays weekday) const
        {
            date_duration three_weeks {21};
            return first_of_month(weekday) + three_weeks;
        }

        date last_of_month(boost::date_time::weekdays weekday) const
        {
            return previous_weekday(last_of_month(), greg_weekday(weekday));
        }

        date first_teenth() const
        {
            return date(m_year, m_month, 13);
        }

        date next_teenth(boost::date_time::weekdays weekday) const
        {
            return next_weekday(first_teenth(), greg_weekday(weekday));
        }

    };
}