// 연습문제 두 정수 사이의 합 Level 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long add(int a, int b) {
	long long result = 0;
	for (int i = a; i <= b; i++) {
		result += i;
	}
	return result;
}

long long solution(int a, int b) {
	long long answer = 0;
	if (a == b) { answer = a; }
	else if (a < b) { answer = add(a, b); }
	else { answer = add(b, a); }
	return answer;
}