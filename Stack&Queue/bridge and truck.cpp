// 스택/큐 다리를 지나는 트럭 Level 2
// 트럭의 무게와 남은 거리를 가진 벡터를 생성하여 최대하중 내 1개씩 진입 0되면 1개씩 빠짐
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void main(void) {
	int bridge_length = 100;
	int weight = 100;
	int sum = 0;
	vector<int> truck_weights = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
	vector<pair<int, int>> temp = { make_pair(0, 0) };
	int answer = 0;

	for (; temp.size() != 0; answer++) {
		if (temp[0].second == 0) {
			sum -= temp[0].first;
			temp.erase(temp.begin());
		}
		if (!truck_weights.empty()) {
			if (sum + truck_weights[0] <= weight) {
				sum += truck_weights[0];
				temp.push_back(make_pair(truck_weights[0], bridge_length));
				truck_weights.erase(truck_weights.begin());
			}
		}
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i].second != 0) {
				temp[i].second--;
			}
		}
	}
	cout << answer << endl;
}

// 제출
/*
#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int sum = 0;
    vector<pair<int, int>> temp = { make_pair(0, 0) };
	int answer = 0;
    
	for (; temp.size() != 0; answer++) {
		if (temp[0].second == 0) {
			sum -= temp[0].first;
			temp.erase(temp.begin());
		}
		if (!truck_weights.empty()) {
			if (sum + truck_weights[0] <= weight) {
				sum += truck_weights[0];
				temp.push_back(make_pair(truck_weights[0], bridge_length));
				truck_weights.erase(truck_weights.begin());
			}
		}
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i].second != 0) {
				temp[i].second--;
			}
		}
    }
    
    return answer;
}
*/