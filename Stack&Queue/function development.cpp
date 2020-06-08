// 스택/큐 기능개발 Level 2

// 앞 기능이 100가 되면 그 때 100이된 모든 기능 배포
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void main(void) {
	vector<int> progresses = {93, 30, 55};
	vector<int> speeds = {1, 30, 5};
	int sum;
	vector<int> answer;

	for (int i = 0; progresses.size() != 0; i++) {
		sum = 0;
		while (progresses[0] >= 100) {
			sum++;
			progresses.erase(progresses.begin());
			speeds.erase(speeds.begin());
			if (progresses.empty()) { 
				
				break;  }
		}
		if (sum != 0) {
			answer.push_back(sum);
		}
		for (int i = 0; i < progresses.size(); i++) {
			if (progresses[i] < 100) {
				progresses[i] += speeds[i];
			}
		}
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

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	int sum;
    vector<int> answer;
    
    	for (int i = 0; progresses.size() != 0; i++) {
		sum = 0;
		while (progresses[0] >= 100) {
			sum++;
			progresses.erase(progresses.begin());
			speeds.erase(speeds.begin());
			if (progresses.empty()) { 
				
				break;  }
		}
		if (sum != 0) {
			answer.push_back(sum);
		}
		for (int i = 0; i < progresses.size(); i++) {
			if (progresses[i] < 100) {
				progresses[i] += speeds[i];
			}
		}
	}
    
    return answer;
}
*/