// 힙 더 맵게 Level 2

// 우선순위 큐로 min heap 구조를 만듦, 작은 두개빼서 연산 후 삽입
#include <string>
#include <vector>
#include <queue>
#include <functional>
#include <iostream>

using namespace std;

void main() {
	vector<int> scoville = {1, 2, 3, 9, 10, 12};
	int K = 7;
	priority_queue<int, vector<int>, greater<int>> temp(scoville.begin(), scoville.end());
	//priority_queue<int, vector<int>, less<int>> temp(scoville.begin(), scoville.end());

	int shake = 0;
	int answer = 0;

	while (temp.top() < K) {
		shake = 0;
		if (temp.size() == 1) {
			answer = -1;
			break;
		}
		shake = temp.top();
		temp.pop();
		shake += (temp.top() * 2);
		temp.pop();
		temp.push(shake);
		answer++;
	}

	cout << answer << endl;
}

// 제출
/*
#include <string>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {

	priority_queue<int, vector<int>, greater<int>> temp(scoville.begin(), scoville.end());
	int shake = 0;
	int answer = 0;
    
	while (temp.top() < K) {
		shake = 0;
		if (temp.size() == 1) { return -1; }
		shake = temp.top();
		temp.pop();
		shake += (temp.top() * 2);
		temp.pop();
		temp.push(shake);
		answer++;
	}
    
    return answer;
}
*/