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
