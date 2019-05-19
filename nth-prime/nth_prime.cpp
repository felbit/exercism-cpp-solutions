#include "nth_prime.h"

namespace prime {

    int nth(unsigned long n)
    {
        if (n < 1) throw std::domain_error("Non positive number given!");
        
        std::vector<int> primes { };
        int nut = 2; // 1 is not prime
        bool hit = false;

        while (primes.size() < n)
        {
            for (int p : primes)
                if (nut % p == 0) hit = true;
            
            if (!hit) primes.push_back(nut);

            hit = false;
            nut++;
        }

        return primes.back();
    }
    
}