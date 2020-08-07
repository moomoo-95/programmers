// 완전탐색 카펫 Level 2

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int i = 1;
    int temp = yellow;
    while(answer.empty()){
        if(brown == temp*2 + (i+2)*2){
            answer.push_back(temp+2);
            answer.push_back(i+2);
            break;
        }
        while(yellow % (i+1) != 0){i++;}
        i++;
        temp = yellow / i;
    }
    return answer;
}
