// �ؽ� ���� Level 2

// ����� �� ��� 2���� ����
// map�� ���� �� ������ ������ �����Ͽ� ����� �� ���(���Դ� �͵� �����̱⿡ n+1���� �� ���� �� �ƹ��͵� ������ ��� 1�� �M)
#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

void main(void) {
	vector<vector<string>> clothes;
	vector<string>temp(2);
	map<string, int> cody;
	vector<string> type;
	int answer = 1;
	temp[0] = "561816556";
	temp[1] = "12";
	clothes.push_back(temp);
	temp[0] = "8456328456";
	temp[1] = "24";
	clothes.push_back(temp);
	temp[0] = "12312242123";
	temp[1] = "48";
	clothes.push_back(temp);
	temp[0] = "23164561";
	temp[1] = "12";
	clothes.push_back(temp);
	temp[0] = "897562";
	temp[1] = "36";
	clothes.push_back(temp);
	temp[0] = "5646849";
	temp[1] = "24";
	clothes.push_back(temp);
	for (int i = 0; i < clothes.size(); i++) {
		cout << clothes[i][1] << " " << clothes[i][0] << endl;
	}
	for (int i = 0; i < clothes.size(); i++) {
		if (cody[clothes[i][1]] == 0) {
			cody[clothes[i][1]] = 1;
			type.push_back(clothes[i][1]);
		}
		cody[clothes[i][1]]++;
	}
	cout << "============" << endl;
	for (int i = 0; i < clothes.size(); i++) {
		cout << clothes[i][1] << " " << clothes[i][0] << endl;
	}
	cout << "============" << endl;
	for (int i = 0; i < cody.size(); i++) {
		cout << type[i] << " " << cody[type[i]] << endl;
	}
	for (int i = 0; i < cody.size(); i++) {
		answer *= cody[type[i]];
	}
	answer--;
	cout << answer << endl;
}

// ����
/*
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	map<string, int> cody;
	vector<string> type;
	int answer = 1;
	for (int i = 0; i < clothes.size(); i++) {
		if (cody[clothes[i][1]] == 0) {
			cody[clothes[i][1]] = 1;
			type.push_back(clothes[i][1]);
		}
		cody[clothes[i][1]]++;
	}
	for (int i = 0; i < cody.size(); i++) {
		answer *= cody[type[i]];
	}
	answer--;
	return answer;
}
*/