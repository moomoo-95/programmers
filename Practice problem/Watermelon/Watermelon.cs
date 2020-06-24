// 연습문제 수박수박수박수? Level 1

public class Solution {
    public string solution(int n) {
        string answer = "";
        for (int i = 0 ; i < n ; i++){
            if (i % 2 == 0){
                answer = answer + "수";
            }
            else{
                answer = answer + "박";
            }
        }
        return answer;
    }
}
