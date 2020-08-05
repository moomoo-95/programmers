// 연습문제 2 x n 타일링 Level 3

class Solution {
    int dp[] = new int[60000];
    int func(int n){
        if(dp[n-1] == 0){
            dp[n-1] = (func(n-1)+func(n-2)) % 1000000007;
        }
        return dp[n-1];
    }
    public int solution(int n) {
    dp[0] = 1;
    dp[1] = 2;
    int answer = func(n);
        return answer;
    }
}
