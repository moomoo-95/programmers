// 연습문제 평균 구하기 Level 1

class Solution {
    public double solution(int[] arr) {
        double answer = 0;
        for(int i = 0; i < arr.length; i++){
            answer += arr[i];
        }
        return answer / arr.length;
    }
}
