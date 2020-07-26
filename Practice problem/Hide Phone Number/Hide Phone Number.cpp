// 연습문제 핸드폰 번호 가리기 Level 1

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int len = phone_number.length();
    string answer = phone_number.substr(len-4, 4);
    len -= 4;
    while (len){
        answer = "*" + answer;
        len--;
    }
    return answer;
}
