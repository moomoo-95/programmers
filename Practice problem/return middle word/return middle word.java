// 연습문제 가운데 글자 가져오기 Level 1

class Solution {
    public String solution(String s) {
        if (s.length() % 2 == 1) { 
            return s.substring(s.length() / 2, (s.length() / 2)+1);
        }
        else { 
            return s.substring((s.length() - 1) / 2, ((s.length() - 1) / 2)+2); 
        }
    }
}
