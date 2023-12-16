#include <stdio.h>
/**
         * Write a C program that prints the size of various types on the computer it is compiled and run on.
         * return 0
         */


int main (void)
{
        printf("size of char: %lu bytes\n", sizeof (char));
        printf("size of int: %lu bytes\n", sizeof (int));
        printf("size of long int: %lu bytes\n", sizeof (long int));
        printf("size of long long int: %lu bytes\n", sizeof (long long int));
        printf("size of float: %lu bytes\n", sizeof (float));

        return 0;
}
