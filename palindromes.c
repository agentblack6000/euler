#include <math.h>
#include <stdio.h>
#include <stdbool.h>

/*
Project Euler: Problem 4 
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#define START 100
#define END 1000

bool is_palindrome(int n);
int reverse(int n);

int main(void)
{
    int a = START;

    int largest_palindrome = 0;

    while (a < END)
    {
        int b = START;
        while (b < END)
        {
            // check if a * b is palindrome
            int product = a * b;
            if (is_palindrome(a * b))
            {
                if (product > largest_palindrome)
                {
                    largest_palindrome = product;
                }
            }
            // check if it's larger than current largest palindrome, if so, set it as largest
            b++;
        }
        a++;
    }

    // print largest palindrome
    printf("%i\n", largest_palindrome);
}

bool is_palindrome(int n)
{
    int reversed_n = reverse(n);

    return (reversed_n == n);
}

int reverse(int n)
{
    int reversed_n = 0;

    // suppose number is 321
    // iteration 1: reversed_n = 0 + 1 = 1, n = 32
    // iteration 2: reversed_n = 10 + 2 = 12, n = 3
    // iteration 3: reversed_n = 120 + 3 = 123, n = 0;
    while (n > 0)
    {
        reversed_n = (10 * reversed_n) + (n % 10);
        n /= 10;
    }
    return reversed_n;
}