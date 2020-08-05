// 연습문제 2 x n 타일링 Level 3

#include <string>
#include <vector>

using namespace std;
int dp[60000] = {0};
int func(int n){
    if(dp[n-1] == 0){
        dp[n-1] = (func(n-1)+func(n-2)) % 1000000007;
    }
    return dp[n-1];
}
int solution(int n) {
    dp[0] = 1;
    dp[1] = 2;
    int answer = func(n);
    return answer;
}
