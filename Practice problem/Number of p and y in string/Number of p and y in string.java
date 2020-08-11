// 연습문제 문자열 내 p와 y의 개수 Level 1

class Solution {
    boolean solution(String s) {
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == 'p' || s.charAt(i) == 'P'){ count++; }
            else if(s.charAt(i) == 'y' || s.charAt(i) == 'Y'){ count--; }
        }
        if(count == 0){ return true; }
        return false;
    }
}
