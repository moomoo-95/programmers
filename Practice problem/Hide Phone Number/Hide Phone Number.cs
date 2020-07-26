//

public class Solution {
    public string solution(string phone_number) {
        int len = phone_number.Length;
        string answer = phone_number.Substring(len-4, 4);
        len -= 4;
        while (len != 0){
            answer = "*" + answer;
            len--;
        }
        return answer;
    }
}
