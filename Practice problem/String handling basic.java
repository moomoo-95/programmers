// 연습문제 문자열 다루기 기본 Level 1

class Solution {
    public boolean solution(String s) {
        if(s.length() != 4 && s.length() !=6){ return false; }
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) > 57 || s.charAt(i) < 48){ return false; }
        }
        return true;
    }
}
