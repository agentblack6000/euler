#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
Project Euler: Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

#define LIMIT 10001

bool is_prime(int n);

int main(void)
{
    int count = 1;
    int prime = 1;

    while (count != LIMIT)
    {
        prime += 2;
        if (is_prime(prime))
        {
            count++;
        }
    }

    printf("%i\n", prime);
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
