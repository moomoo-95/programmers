// 연습문제 자릿수 더하기 Level 1

#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    while(n >= 10){
        answer += n%10;
        n -= n%10;
        n /= 10;
    }
    answer += n;
    return answer;
}
