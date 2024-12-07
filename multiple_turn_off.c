#include <stdio.h>

int main() {
    unsigned char reg = 0b11011101;
    printf("old reg : `%b`\n", reg);

    unsigned char mask = ~reg; // create mask to turn off all the bits
    reg &= mask; // using AND to apply mask -> turns off all the bits

    printf("new reg : `%b`\n", reg);
    
    return 0;
}