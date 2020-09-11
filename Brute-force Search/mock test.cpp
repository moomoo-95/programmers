// 완전탐색 모의고사 Level 1

//수포자중 점수 제일 높은 사람 찾기, 패턴으로 정답비교
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool desc(pair<int, int> a, pair<int, int> b) {
	return a.first > b.first;
}

void main() {
	vector<int> answers = {1, 2, 3, 4, 5};
	vector<int> answer;
	vector<int> they(3);
	vector<int> one = { 1,2,3,4,5 };
	vector<int> two = { 2,1,2,3,2,4,2,5 };
	vector<int> thr = { 3,3,1,1,2,2,4,4,5,5 };

	for (int i = 0; i<answers.size(); i++) {
		if (answers[i] == one[i%one.size()]) they[0]++;
		if (answers[i] == two[i%two.size()]) they[1]++;
		if (answers[i] == thr[i%thr.size()]) they[2]++;
	}
	
	int they_max = *max_element(they.begin(), they.end());
	for (int i = 0; i< 3; i++) {
		if (they[i] == they_max) answer.push_back(i + 1);
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
#include <iostream>

using namespace std;

bool desc(pair<int, int> a, pair<int, int> b) {
	return a.first > b.first;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
	vector<int> sec = {1, 3, 4, 5};
	vector<int> thi = { 3, 1, 2, 4, 5 };
	vector<pair<int, int>> count = {make_pair(0,1), make_pair(0,2), make_pair(0,3) };
    
	for (int i = 0; i < answers.size(); i++) {
		if (answers[i] == 1 + i % 5) { count[0].first++; }
		if (i % 2 == 0 ) {
			if (answers[i] == 2) { count[1].first++; }
			if (answers[i] == thi[(i / 2) % 5]) { count[2].first++; }
		}
		else {
			if (answers[i] == sec[((i-1)/2)%4]) { count[1].first++; }
			if (answers[i] == thi[((i - 1) / 2) % 5]) { count[2].first++; }
		}
	}
	sort(count.begin(), count.end(), desc);
	for(int i = 0; i < 3 && count[i].first == count[0].first; i++) {
		answer.push_back(count[i].second);
	}
    
    return answer;
}
*/
