// 스택/큐 주식가격 Level 2
// 0부터 이후 차례대로 조회하여 큰놈이 나오면 거리값을 answer에 저장
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void main() {
	vector<int> prices = {1, 2, 3, 2, 3};
	vector<int> answer;
	bool check;
	for (int i = 0; i < prices.size() - 1; i++) {
		check = true;
		for (int j = i + 1; j < prices.size(); j++) {
			if (prices[i] > prices[j]) {
				answer.push_back(j - i);
				check = false;
				break;
			}
		}
		if (check) {
			answer.push_back(prices.size() - i - 1);
		}
	}
	answer.push_back(0);
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << endl;
	}
}

// 제출
/*
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
	bool check;
    
	for (int i = 0; i < prices.size() - 1; i++) {
		check = true;
		for (int j = i + 1; j < prices.size(); j++) {
			if (prices[i] > prices[j]) {
				answer.push_back(j - i);
				check = false;
				break;
			}
		}
		if (check) {
			answer.push_back(prices.size() - i - 1);
		}
	}
	answer.push_back(0);
    
    return answer;
}
*/