// 2020카카오 인턴쉽 키패드 누르기

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int center(int a, int b) {
	int count = 0;
	if (a < b) {
		while (b != a) {
			if (a + 2 < b) {
				count++;
				b -= 3;
			}
			else {
				count++;
				b--;
			}
		}
	}
	else {
		while (b != a) {
			if (b < a - 2) {
				count++;
				b += 3;
			}
			else {
				count++;
				b++;
			}
		}
	}
	return count;
}

string solution(vector<int> numbers, string hand) {
	int now_l = 10, now_r = 12;
	string answer = "";

	for (int i = 0; i < numbers.size(); i++) {
		if ((numbers[i] == 1 || numbers[i] == 4) || numbers[i] == 7) {
			now_l = numbers[i];
			answer += "L";
		}
		else if ((numbers[i] == 3 || numbers[i] == 6) || numbers[i] == 9) {
			now_r = numbers[i];
			answer += "R";
		}
		else {
			int l = 0, r = 0;
			int temp = numbers[i];
			if (temp == 0) { temp = 11; }
			l = center(now_l, temp);
			r = center(temp, now_r);
			if (l < r) {
				now_l = temp;
				answer += "L";
			}
			else if (r < l) {
				now_r = temp;
				answer += "R";
			}
			else {
				if (hand.compare("right") == 0) {
					now_r = temp;
					answer += "R";
				}
				else {
					now_l = temp;
					answer += "L";
				}
			
			}
		}
	}
	return answer;
}
