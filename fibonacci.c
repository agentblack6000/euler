#include <stdio.h>

/*
Project Euler: Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms. 
*/

#define LIMIT 4000000

int main(void)
{
    int term_one = 0;
    int term_two = 1;

    int sum = 0;
    int even_fibonacci_sum = 0;

    while (term_one < LIMIT && term_two < LIMIT)
    {
        sum = term_one + term_two;
        
        if (sum % 2 == 0)
        {
            printf("%d\n", sum);
            even_fibonacci_sum += sum;
        }

        term_one = term_two;
        term_two = sum;
    }

    printf("sum: %d\n", even_fibonacci_sum);
    
}