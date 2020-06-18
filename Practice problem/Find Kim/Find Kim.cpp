// 연습문제 서울에서 김서방 찾기 Level 1

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    vector<string>::iterator iter;
    iter = find(seoul.begin(), seoul.end(), "Kim");
    string answer ="김서방은 ";
    answer += to_string(iter - seoul.begin());
    answer += "에 있다";
    return answer;
}