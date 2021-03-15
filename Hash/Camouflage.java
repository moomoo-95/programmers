//  해시 위장 Level 2

import java.util.Vector;

class Solution {
    public int solution(String[][] clothes) {
        Vector<String> type = new Vector<String>();
        Vector<Integer> cnt = new Vector<Integer>();
        int answer = 1;
        for (int i = 0; i < clothes.length; i++){
            boolean check = true;
            for (int j = 0; j < type.size(); j++){
                if (type.get(j).compareTo(clothes[i][1]) == 0){
                    cnt.set(j, cnt.get(j)+1);
                    check = false;
                    break;
                }
            }
            if (check){
                type.add(clothes[i][1]);
                cnt.add(2);
            }
        }
        for (int i = 0; i < cnt.size(); i++){
            answer *= cnt.get(i);
        }
        answer--;
        
        return answer;
    }
}
