# 연습문제 소수 찾기 Level 1

class Solution {
    public int solution(int n) {
        int[] primelist = new int[500000];
        int answer = 0;
        boolean is_prime = true;
        int root = 0;
        for(int i = 2; i < n+1 ; i++){
            is_prime = true;
            root = (int) Math.ceil(Math.sqrt(i));
            for(int j = 0; primelist[j] != 0 && primelist[j] <= root ; j++){
                if (i % primelist[j] == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                primelist[answer] = i;
                answer++;
            }
        }
        return answer;
    }
}
