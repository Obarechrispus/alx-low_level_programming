#include <stdio.h>

void print_binary(unsigned long int n) {
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1); 
    
   unsigned long int bit_position;
    unsigned long int print_flag = 0;
    
    for (bit_position = 0; bit_position < sizeof(unsigned long int) * 8; bit_position++) {
        if (n & mask) {
            putchar('1');
            print_flag = 1;
        } else if (print_flag || bit_position == sizeof(unsigned long int) * 8 - 1) {
            putchar('0');
        }
        mask >>= 1;
    }
}
