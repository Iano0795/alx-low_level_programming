#include "main.h"
#include <stdio.h>

/**
 * main - multiplies numbers supplied as arguments
 * @argc: count of arguments
 * @argv: array of pointers to arguments
 * Return: returns the result
*/

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    if (argc == 0)
    {
        printf("Error");
        return (1);
    }
    printf("%d\n", a * b);
    return (0);
}