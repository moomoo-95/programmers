// 스택/큐 탑 Level 2

//송신 탑 신호를 수신하는 수신탑 배열 구하기
// 0은 0이고 1부터 시작해서 앞 수신탑들을 역순으로 조회하여 가장 먼저 송신 탑보다 높은 수신탑 반환
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void main(void) {
	//vector<int> heights = {6, 9, 5, 7, 4};
	vector<int> heights = { 6, 9, 5, 7, 4 };
	vector<int> answer;
	
	for (int i = 0; i < heights.size(); i++) {
		cout << heights[i] << " ";
	}
	cout << endl;
	answer.push_back(0);
	
	for (int i = 1; i < heights.size(); i++) {
		for (int j = i-1; j > -1; j--) {
			if (heights[i] < heights[j]) { 
				answer.push_back(j+1); 
				break;
			}
		}
		if (answer.size() != i+1) { answer.push_back(0); }
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << " ";
	}
	cout << endl;

}

// 제출
/*
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	answer.push_back(0);
	for (int i = 1; i < heights.size(); i++) {
		for (int j = i - 1; j > -1; j--) {
			if (heights[i] < heights[j]) {
				answer.push_back(j + 1);
				break;
			}
		}
		if (answer.size() != i + 1) { answer.push_back(0); }
	}

	return answer;
}
*/
