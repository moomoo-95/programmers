// 월간 코드 챌린지 시즌1 두개 뽑아서 더하기

class Solution {
    public int[] solution(int[] numbers) {
        int[] check = new int[201];
        int idx = 0;
        for (int i = 0; i < numbers.length-1; i++){
            for (int j = i+1; j < numbers.length; j++){
                if (check[numbers[i] + numbers[j]] == 0){
                    check[numbers[i] + numbers[j]] = 1;
                    idx++;
                }
            }
        }
        int[] answer = new int[idx];
        idx = 0;
        for (int i = 0; i < check.length; i++){
            if (check[i] == 1){
                answer[idx] = i;
                idx++;
            }
        }
        return answer;
    }
}
