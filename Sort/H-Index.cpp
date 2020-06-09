// ���� H-Index Level 2

// H-index n���� ���� h�� �̻� �ο�� ���� h���̰� ������ ���� h ���Ϸ� �ο�Ǿ��� �� h�� �ִ밪
// size�� �پ��鼭 ��� ���Ұ� citations[i]�γ��� h-index�� ������ �� ������ ������ h-index��
#include <string>
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

// ����
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