
#include "named_type.h"

namespace leap
{
    using Year = NamedType<int, struct YearTag>;
    bool is_leap_year(Year);
}
