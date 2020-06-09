// ���� K��° �� Level 1

// �迭���� i��°���� j��°���� �� �� k��° �� ���
// �迭�� �ӽù迭�� �����ϰ� �ε��� i-1~j��ŭ ���� �� �ε����� i+k-2�� �� ���
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main(void) {
	vector<int> array = {1, 5, 2, 6, 3, 7, 4};
	vector<vector<int>> commands{ {2, 5, 3}, {4, 4, 1}, {1, 7, 3} };
	vector<int> temp;
	vector<int> answer;
	for (int i = 0; i < array.size(); i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < commands.size(); i++) {
		cout << commands[i][0] << " " << commands[i][1] << " " << commands[i][2] << endl;
	}
	for (int i = 0; i < commands.size(); i++) {
		temp = array;
		sort(temp.begin() + commands[i][0]-1, temp.begin() + commands[i][1]);
		answer.push_back(temp[commands[i][0] + commands[i][2] - 2]);
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << endl;
	}
}

// ����
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for (int i = 0; i < commands.size(); i++) {
		temp = array;
		sort(temp.begin() + commands[i][0]-1, temp.begin() + commands[i][1]);
		answer.push_back(temp[commands[i][0] + commands[i][2] - 2]);
	}
    return answer;
}
*/