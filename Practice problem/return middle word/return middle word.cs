// 연습문제 가운데 글자 가져오기 Level 1

public class Solution {
    public string solution(string s) {
        if (s.Length % 2 == 1) { 
            return s.Substring(s.Length / 2, 1); }
        else { 
            return s.Substring((s.Length - 1) / 2, 2); 
        }
    }
}
