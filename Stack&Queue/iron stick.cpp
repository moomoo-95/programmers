// 스택/큐 쇠막대기 Level 2
// (이면 stack에 넣고 )이면 앞이 (이면 (갯수만큼 더하고 )이면 1을 더함
#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

void main() {
	string arrangement = "()(((()())(())()))(())";
	int answer = 0;
	stack<char> stick;

	for (int i = 0; i < arrangement.length(); i++) {
		if (arrangement[i] == '(') {
			stick.push(arrangement[i]);
		}
		else {
			stick.pop();
			if (arrangement[i - 1] == '(') {
				answer += stick.size();
			}
			else {
				answer++;
			}
		}
	}

	cout << answer << endl;
}

// 제출
/*
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
	int answer = 0;
	stack<char> stick;
    
    for (int i = 0; i < arrangement.length(); i++) {
		if (arrangement[i] == '(') {
			stick.push(arrangement[i]);
		}
		else {
			stick.pop();
			if (arrangement[i - 1] == '(') {
				answer += stick.size();
			}
			else {
				answer++;
			}
		}
	}
    
    return answer;
}
*/