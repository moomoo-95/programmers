#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int z = x;
    int y = 0;
    while(x > 0) {
        y += x%10;
        x /= 10;
    }
    if(z % y == 0) { return true; }
    return false;
}
