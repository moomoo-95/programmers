// ����/ť �踷��� Level 2
// (�̸� stack�� �ְ� )�̸� ���� (�̸� (������ŭ ���ϰ� )�̸� 1�� ����
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

// ����
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