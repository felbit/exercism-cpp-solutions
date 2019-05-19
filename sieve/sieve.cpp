#include "sieve.h"

namespace sieve {
    auto primes(int n) -> const std::vector<int>
    {
        std::vector<int> numbers(n);
        std::vector<int> primes;
        std::map<int, bool> marked;

        // seed the vector with all possible matches 1..n
        std::iota (std::begin(numbers), std::end(numbers), 1);

        // drop the one since it is not a prime number
        numbers.erase(numbers.begin());

        // fill the map
        for (const int &n : numbers)
            marked.insert(std::pair<int, bool>(n, false));

        // for all members of the map ...
        for (auto &m : marked)

          // ... the next not yet marked
          if (! m.second) {

            // copy to the primes vector
            primes.push_back(m.first);

            // and mark it and all multiples so we won't visit them
            for (auto &t : marked)
                if (t.first % m.first == 0)
                    t.second = true;
          }

        return primes;
    }
}