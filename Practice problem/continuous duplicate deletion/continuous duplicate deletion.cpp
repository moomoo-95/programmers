// 연습문제 같은 숫자는 싫어 Level 1

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	answer.push_back(arr[0]);
	for (int i = 1; i < arr.size(); i++) {
		if (answer[answer.size() - 1] != arr[i]) { answer.push_back(arr[i]); }
	}
	return answer;
}
