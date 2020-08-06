// 연습문제 피보나치 수열 Level 2

#include <stdio.h>

int farr[100000] = {0};
int fib(int n){
    if(n != 0 && farr[n] == 0){
        farr[n] = (fib(n-1) + fib(n-2))%1234567;
    }
    return farr[n];
}
int solution(int n) {
    farr[0] = 0;
    farr[1] = 1;
    int answer = fib(n);
    return answer;
}
