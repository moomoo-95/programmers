// ���� ���� ū �� Level 2

// �迭�� ���� ��� �������� �� ���� ū ��
// ���ڿ��� ��ȯ, �� �ܾ �̾��� �� ū ���� �Ǵ� ������ ����
//������� ����, �� ��� 0�� ���� 0���� �ʱ�ȭ
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(const string &a, const string &b)
{
	if (b + a < a + b)
		return true;
	return false;
}

void main(void) {
	//vector<int> numbers = { 6, 10, 2 };
	//vector<int> numbers = { 3, 30, 34, 5, 9 };
	//vector<int> numbers = { 3, 33 };
	//vector<int> numbers = { 3, 340 };
	//vector<int> numbers = { 340, 340 };
	//vector<int> numbers = { 432, 43 };
	//vector<int> numbers = { 232, 42 };
	vector<int> numbers = {54, 545 };
	//vector<int> numbers = { 45, 454 };
	//vector<int> numbers = { 0, 0, 0 };
	vector<string> strings;
	string answer;
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	//���ڿ��� ��ȯ
	for (int i = 0; i < numbers.size(); i++) {
		strings.push_back(to_string(numbers[i]));
	}
	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << " ";
	}
	cout << endl;
	//�� �ܾ �̾��� �� ū ���� �Ǵ� ������ ����
	sort(strings.begin(), strings.end(), compare);
	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << " ";
	}
	cout << endl;
	// ������� ����
	for (int i = 0; i < strings.size(); i++) {
		answer += strings[i];
	}
	// ��� 0�ϰ�� 0���� �ʱ�ȸ
	if (answer[0] == '0') {answer = "0";}
	cout << answer << endl;
}

// ����
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b)
{
	if (b + a < a + b)
		return true;
	return false;
}

string solution(vector<int> numbers) {
    vector<string> strings;
    string answer = "";
    
    for (int i = 0; i < numbers.size(); i++) {
		strings.push_back(to_string(numbers[i]));
	}
    sort(strings.begin(), strings.end(), compare);
	for (int i = 0; i < strings.size(); i++) {
		answer += strings[i];
	}
	if (answer[0] == '0') {answer = "0";}
    return answer;
}
*/