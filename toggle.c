#include <stdio.h>

int main() {
    unsigned char reg = 0b11011101;
    printf("old reg : `%b`\n", reg);

    unsigned char offset = 6; // create offset to toggle the 7th bit
    unsigned char mask = 1 << offset; // create a mask to toggle the 7th bit
    reg ^= mask; // using XOR to apply mask -> toggles the current state of the 7th bit

    printf("new reg : `%b`\n", reg);

    return 0;
}