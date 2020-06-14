import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        ArrayList<Integer> answer = new ArrayList<>();
        answer.add(arr[0]);
        for (int i = 1, j = 0; i < arr.length; i++) {
            if (answer.get(answer.size()-1) != arr[i]) {
                answer.add(arr[i]);
            }
        }
        return Arrays.stream(answer.toArray(new Integer[answer.size()])).mapToInt(i->i).toArray();
    }
}