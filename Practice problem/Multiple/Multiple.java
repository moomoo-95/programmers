// 연습문제 나누어 떨어지는 숫자 배열 Level 1

import java.util.*;
class Solution {
    public int[] solution(int[] arr, int divisor) {
        ArrayList<Integer> answer = new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % divisor == 0) {
                answer.add(arr[i]);
            }
        }
        if (answer.isEmpty()) {
            answer.add(-1);
        }
        else {
            Collections.sort(answer);
        }
        return Arrays.stream(answer.toArray(new Integer[answer.size()])).mapToInt(i->i).toArray();
    }
}