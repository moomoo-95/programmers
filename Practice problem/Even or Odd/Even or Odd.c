// 연습문제 짝수와 홀수  Level 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(4);
    answer = "Even";
    if(num % 2 == 1 || num % 2 == -1) { answer = "Odd"; }
    return answer;
}
