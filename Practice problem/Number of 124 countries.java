//

class Solution {
    public String solution(int n) {
        String answer = "";
        int k;
        while (true){
            k = n % 3;

            if (k == 0) { k = 3; }

            if (k == 1) { answer = '1' + answer; }
            else if (k == 2) { answer = '2' + answer; }
            else { answer = '4' + answer; }

            if(n-k == 0) { break; }
            else { n = (n- k)/3; }
        }
        return answer;
    }
}
