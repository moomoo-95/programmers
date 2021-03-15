//해시 전화번호 목록 Level 2

import java.util.Arrays;

class Solution {
    public boolean solution(String[] phone_book) {
        Arrays.sort(phone_book);
        
        for (int i = 0; i < phone_book.length-1; i++){
            if(phone_book[i].length() > phone_book[i+1].length()){ continue; }
            if(phone_book[i].compareTo(phone_book[i+1].substring(0, phone_book[i].length())) == 0){
                return false;
            }
        }
        return true;
    }
}
