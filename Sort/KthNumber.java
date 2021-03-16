// 정렬 K번째 수 Level 1

import java.util.Arrays;
class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        for (int i = 0; i < answer.length; i++){
            int[] tmp = Arrays.copyOfRange(array, commands[i][0]-1, commands[i][1]);
            Arrays.sort(tmp);
            answer[i] = tmp[commands[i][2]-1]; 
        }
        return answer;
    }
}
