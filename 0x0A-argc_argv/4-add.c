#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add arguments
 * @argc: count of arguments
 * @argv: array of pointers to arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
    int i, n;
    int count = argc;
    int sum = 0;
    char *flag;

    if (argc < 2)
    {
        printf("%d\n", 0);
    }
    for (i = 1; i < count; i++)
    {
        n = strtoi(argv[i], &flag, 10);
        if (*flag)
        {
            printf("Error\n");
            return (1);
        }
        else
        {
            sum += n;
        }
        printf("%d\n", sum);
        return (0);
    }
}