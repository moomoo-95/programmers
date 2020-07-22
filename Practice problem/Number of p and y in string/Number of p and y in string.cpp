// 연습문제 문자열 내 p와 y의 개수 Level 1

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == 'p' || s.at(i) == 'P'){ count++; }
        else if(s.at(i) == 'y' || s.at(i) == 'Y'){ count--; }
    }
    if(count == 0){ return true; }
    else{ return false; }
}
