#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t func(uint16_t N) {
    /* change all right side bits to 1 */
    N |= N >> 1;
    N |= N >> 2;
    N |= N >> 4;
    N |= N >> 8;

    return (N + 1) >> 1;
}

int main() {
    uint16_t ret = 0;
    ret = func(7);
    printf("func(7) = %u\n", ret);
    ret = func(26);
    printf("func(26) = %u\n", ret);

    return 0;
}
