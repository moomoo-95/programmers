// 연습문제 피보나치 수열 Level 2

class Solution {
    int[] farr = new int[100001];
    public int fib(int n){
        if(n != 0 && farr[n] == 0){
            farr[n] = (fib(n-1) + fib(n-2))%1234567;
        }
        return farr[n];
    }
    public int solution(int n) {
        farr[0] = 0;
        farr[1] = 1;
        int answer = fib(n);
        return answer;
    }
}
