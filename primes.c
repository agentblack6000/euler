#include <stdio.h>

/*
Project Euler: Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#define NUMBER 600851475143

int main(void)
{
    long n = NUMBER;

    int factor = 2;
    int last_factor = 1;

    /* when a number if a factor it will be prime, for instance if the number was even it would be divided
    by 2 until it becomes odd, i.e can't be divided by 4 later. */
    while(n > 1)
    {
        // if factor can evenly divide n, completely divide it out
        if (n % factor == 0)
        {
            last_factor = factor;
            n /= factor;

            while (n % factor == 0)
            {
                n /= factor;
            }
        }

        // increment factor
        ++factor;
    }

    printf("%d\n", last_factor);

}