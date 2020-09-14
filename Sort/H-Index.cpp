// 정렬 H-Index Level 2

// H-index n개의 논문중 h번 이상 인용된 논문이 h편이고 나머지 논문이 h 이하로 인용되었을 때 h의 최대값
// size가 줄어들면서 모든 원소가 citations[i]인놈의 h-index의 집합이 곧 기존의 벡터의 h-index값
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


void main(void) {
	vector<int> citations = {3, 0, 6, 1, 5};
	vector<int> temp;
	int answer = 0;
	sort(citations.begin(), citations.end());
	for (int i = 0; i < citations.size(); i++) {
		cout << citations[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < citations.size(); i++) {
		if (citations.size() - i < citations[i]) {
			temp.push_back(citations.size() - i);
		}
		else {
			temp.push_back(citations[i]);
		}
	}
	sort(temp.begin(), temp.end());
	answer = temp[temp.size()-1];
	cout << answer << endl;

}

// 제출
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());

    for (int i = 0; i < citations.size(); ++i) {
        if (citations[i] < i + 1) {
            return i;
        }
    }
    return citations.size();
}
*/
