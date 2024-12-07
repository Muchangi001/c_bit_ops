#include <stdio.h>

int main() {
    unsigned char reg = 0b11011101;
    printf("old reg : `%b`\n", reg);

    unsigned char mask = ~reg; // create a mask using NOT(inverter)
    reg |= mask; // using OR to apply mask -> turns on all the bits

    printf("new reg : `%b`\n", reg);

    return 0;
}