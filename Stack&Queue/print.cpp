// ����/ť ����Ʈ Level 2

//�켱���� ����Ʈ
// ť�� index���� �����ϰ� ���� vector�� ����ū���� ��� ���, �´� 0���� ó��
// index == location�� �� ���� ���
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

// ����
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