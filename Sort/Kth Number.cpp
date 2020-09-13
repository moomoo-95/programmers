// 정렬 K번째 수 Level 1

// 배열에서 i번째부터 j번째까지 수 중 k번째 수 출력
// 배열을 임시배열에 저장하고 인덱스 i-1~j만큼 정렬 후 인덱스가 i+k-2인 값 출력
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

// 제출
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
