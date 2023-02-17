#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random integer and
 *              determines whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        /* Seed the random number generator */
        srand(time(0));

        /* Generate a random integer between -RAND_MAX/2 and +RAND_MAX/2 */
        n = rand() - RAND_MAX / 2;

        /* Check if the number is positive, negative, or zero */
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }

        return (0);
}

