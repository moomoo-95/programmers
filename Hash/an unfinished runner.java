// 해시 완주하지 못한자 Level 1

import java.util.Arrays;

class Solution {
    public String solution(String[] participant, String[] completion) {
        Arrays.sort(participant);
        Arrays.sort(completion);
        String answer = "";
        for (int i = 0; i < completion.length; i++){
            if (participant[i].compareTo(completion[i]) != 0){
                answer = participant[i];
                break;
            }
        }
        if (answer.compareTo("") == 0){
            answer = participant[participant.length-1];
        }
        return answer;
    }
}
