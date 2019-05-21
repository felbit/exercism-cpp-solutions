#include "sum_of_multiples.h"

namespace sum_of_multiples
{
    int to(std::set<int> ns, int limit)
    {
        std::set<int> multiples {};

        for (int n : ns)
            for (int i = 1; i < limit; ++i)
                if (i % n == 0) multiples.insert(i);

        int sum = 0;
        for (int m : multiples) sum += m;
        return sum;
    }
}