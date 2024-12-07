#include <stdio.h>

int main() {
    unsigned char reg = 0b11011101;
    printf("old reg : `%b`\n", reg);

    unsigned char offset = 6; // create offset to turn off the 7th bit
    unsigned char mask = ~(1 << offset); // create mask to turn off the 7th bit
    reg &= mask; // using AND to apply mask -> turns off th 7th bit

    printf("new reg : `%b`\n", reg);
    
    return 0;
}