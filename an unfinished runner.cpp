// �ؽ� Level 1

//�������� ������, participant���� �� ���� �߿� completion ���� ���� �������� �ʴ� ���� ���
// participant����, completion ���� ���� �� ���� �ε��� ���� ��, �ٸ��� �� ���� ���
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void main(void) {
	vector<string> participant(3);
	vector<string> completion(2);
	participant[0] = "leo";
	participant[1] = "kiki";
	participant[2] = "eden";
	completion[0] = "eden";
	completion[1] = "kiki";
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	int i = 0;
	while (i < completion.size()) {
		if (participant[i].compare(completion[i]) == 0) {
			i++;
			continue;
		}
		break;
	}
	cout << participant[i] << endl;
}

//����
/*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	vector<string>::iterator iter = participant.begin();
	vector<string>::iterator iter2 = completion.begin();
	int i = 0;
	while (i < completion.size()) {
		if (participant[i].compare(completion[i]) == 0) {
			i++;
			continue;
		}
		break;
	}
	return participant[i];
}
*/