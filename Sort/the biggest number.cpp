// 정렬 가장 큰 수 Level 2

// 배열의 수를 모두 조합했을 때 가장 큰 수
// 문자열로 변환, 두 단어를 이었을 때 큰 수가 되는 순으로 정렬
//순서대로 더함, 단 모두 0일 때는 0으로 초기화
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
	//문자열로 변환
	for (int i = 0; i < numbers.size(); i++) {
		strings.push_back(to_string(numbers[i]));
	}
	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << " ";
	}
	cout << endl;
	//두 단어를 이었을 때 큰 수가 되는 순으로 정렬
	sort(strings.begin(), strings.end(), compare);
	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << " ";
	}
	cout << endl;
	// 순서대로 더함
	for (int i = 0; i < strings.size(); i++) {
		answer += strings[i];
	}
	// 모두 0일경우 0으로 초기회
	if (answer[0] == '0') {answer = "0";}
	cout << answer << endl;
}

// 제출
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