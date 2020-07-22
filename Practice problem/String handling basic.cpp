// 연습문제 문자열 다루기 기본 Level 1

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if(s.length() != 4 && s.length() !=6){ return false; }
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) > 57 || s.at(i) < 48){ return false; }
    }
    return true;
}
