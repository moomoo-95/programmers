// ����/ť ž Level 2

//�۽� ž ��ȣ�� �����ϴ� ����ž �迭 ���ϱ�
// 0�� 0�̰� 1���� �����ؼ� �� ����ž���� �������� ��ȸ�Ͽ� ���� ���� �۽� ž���� ���� ����ž ��ȯ
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

// ����
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