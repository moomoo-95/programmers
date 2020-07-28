// 연습문제 124 나라의 숫자 Level 1

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    int k;
    string answer = "";
    while (1){
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
