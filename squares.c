#include <math.h>
#include <stdio.h>

/*
Project Euler: Problem 6
The sum of the squares of the first ten natural numbers is,
    1 + 4 + ... + 100 = 385
The square of the sum of the first ten natural numbers is,
    (1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural 
numbers and the square of the sum is
    3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural 
numbers and the square of the sum.
*/

#define LIMIT 100

int main(void)
{
    double sum_of_squares = pow((LIMIT * (LIMIT + 1)) / 2.0, 2);
    double square_of_sum = (((2 * LIMIT) + 1) * (LIMIT + 1)) * (LIMIT / 6.0);

    printf("%.0f - %.0f = %.0f\n", sum_of_squares, square_of_sum, sum_of_squares - square_of_sum);
}