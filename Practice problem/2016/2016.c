// 연습문제 2016 Level 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
	int month[12] = { 0, 31, 60, 91, 121, 152, 182,213, 244, 274, 305, 335 };
	char* day[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
	char* answer = (char*)malloc(sizeof(char*));

	answer = day[(month[a - 1] + b) % 7];
	return answer;
}
