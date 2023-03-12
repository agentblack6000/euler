#include <stdbool.h>
#include <stdio.h>

/*
Project Euler: Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#define LIMIT 20

bool is_divisble(int n);

int main(void)
{
    int n = 1;
    // int i = 1;
    // while (n == 0)
    // {
    //     if (is_divisble(i))
    //     {
    //         n = i;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }

    for (int i = 2; i < LIMIT; i++)
    {
        n *= i;
    }
    
    
    printf("%i\n", n);

}

bool is_divisble(int n)
{
    bool divisible = true;
    for (int i = 2; i < LIMIT; i++)
    {
        if (n % i != 0)
        {
            divisible = false;
        }
    }
    return divisible;
}