// 스택/큐 프린트 Level 2

//우선순위 프린트
// 큐에 index값을 저장하고 기존 vector의 가장큰값일 경우 출력, 걔는 0으로 처리
// index == location일 때 순서 출력
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

void main () {
	vector<int> priorities = {1, 1, 9, 1, 1, 1};
	int location = 0;
	int answer = 0;
	queue<int> temp;
	vector<int>	sorted;
	for (int i = 0; i < priorities.size(); i++) {
		temp.push(i);
	}
	while (!temp.empty()) {
		int index = temp.front();
		temp.pop();
		if (priorities[index] != *max_element(priorities.begin(), priorities.end())) {
			temp.push(index);
		}
		else {
			sorted.push_back(index);
			priorities[index] = 0;
			if (sorted[sorted.size()-1] == location) {
				answer = sorted.size();
				break;
			}
		}
	}

	cout << answer <<  endl;
}

// 제출
/*
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
	queue<int> temp;
	vector<int>	sorted;
    
	for (int i = 0; i < priorities.size(); i++) {
		temp.push(i);
	}
	while (!temp.empty()) {
		int index = temp.front();
		temp.pop();
		if (priorities[index] != *max_element(priorities.begin(), priorities.end())) {
			temp.push(index);
		}
		else {
			sorted.push_back(index);
			priorities[index] = 0;
			if (sorted[sorted.size()-1] == location) {
				answer = sorted.size();
                return answer;
			}
		}
	}
    
    return answer;
}
*/