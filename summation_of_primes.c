#include <math.h>
#include <stdbool.h>
#include <stdio.h>

/*
Project Euler: Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#define LIMIT 2000000

bool is_prime(int n);

int main(void)
{
    long summation = 2;
    int prime = 1;

    while (prime < LIMIT)
    {
        prime += 2;
        if (is_prime(prime))
        {
            summation += prime;
        }
    }

    printf("%lu\n", summation);
    return 0;
}

bool is_prime(int n)
{
    if (n == 1)
    {
        // 1 isn't prime
        return false;
    }
    else if (n < 4)
    {
        // 2 and 3 are prime
        return true;
    }
    else if (n % 2 == 0)
    {
        // all primes except 2 are odd
        return false;
    }
    else if (n < 9)
    {
        // we've eliminated 4, 6, 8, that leaves 5 and 7
        return true;
    }
    else if (n % 3 == 0)
    {
        // primes aren't divisible by 3
        return false;
    }
    else
    {
        // all primes > 3 can be written as 6k +/- 1
        // any number n can have only one prime  factor greater than sqrt(n)
        int r = floor(pow(n, 0.5));
        int f = 5;

        while (f <= r)
        {
            if (n % f == 0)
            {
                return false;
            }
            if (n % (f + 2) == 0)
            {
                return false;
            }

            f += 6;
        }
        return true;
    }
}