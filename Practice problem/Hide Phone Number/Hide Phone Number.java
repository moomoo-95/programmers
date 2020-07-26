// 연습문제 핸드폰 번호 가리기 Level

class Solution {
    public String solution(String phone_number) {
        int len = phone_number.length();
        String answer = phone_number.substring(len-4, len);
        len -= 4;
        while (len != 0){
            answer = "*" + answer;
            len--;
        }
        return answer;
    }
}
