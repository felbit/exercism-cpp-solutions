#include "prime_factors.h"

namespace prime_factors
{
    std::vector<int> of(int n)
    {
        std::vector<int> result {};
        if (n < 2) return result;

        int m = 2;
        while (n > 1) {
            if (n % m == 0) {
                result.push_back(m);
                n /= m;
            } else {
                ++m;
            }
        }

        return result;
    }
}