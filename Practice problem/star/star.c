// 연습문제 직사각형 별찍기  Level 1

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
