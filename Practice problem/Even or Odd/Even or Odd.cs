// 연습문제 짝수와 홀수  Level 1

public class Solution {
    public string solution(int num) {
        string answer = "Even";
        if(num % 2 == 1 || num % 2 == -1) {
            answer = "Odd";
        }
        return answer;
    }
}
