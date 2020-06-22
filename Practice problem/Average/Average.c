// 연습문제 평균 구하기 Level 1

#include <stdio.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    for(int i = 0; i < arr_len; i++){
        answer += arr[i];
    }
    return answer / arr_len;
}
