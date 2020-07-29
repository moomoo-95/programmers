// 연습문제 정수 내림차순으로 배치하기 Level 1

using System;
public class Solution {
    public long solution(long n) {
        int [] array = new int[] {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        long answer = 0;
        while(true){
            if (n == 0) { break; }
            array[10] += 1;
            int k = (int)(n % 10);
            array[k] += 1;
            n = (n-k)/10;
        }

        for(int i = 0; i < array[10]; i++){
            while( array[array[11]] == 0 ){ array[11] += 1; }
            answer = answer + (long)(array[11]*Math.Pow(10, i));
            array[array[11]] -= 1;
        }
        return answer;
    }
}
