// 연습문제 2016 Level 1

public class Solution {
    public string solution(int a, int b) {
        int[] month = {0, 31, 60, 91, 121, 152, 182,213, 244, 274, 305, 335};
        string[] day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
        string answer = day[(month[a-1] + b) % 7];
        return answer;
    }
}
