//해시 Level 2

//전화번호부 내 한 번호가 다른 번호의 접두어인 경우 찾기
//phone_book 벡터 정렬 후 n번째와 n+1번째에서 0부터 n의 크기만큼의 서브스트링과 비교 있으면 false, 다비교후 없다면 true
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	vector<string> phone_book(3);
	phone_book[0] = "119";
	phone_book[1] = "97674223";
	phone_book[2] = "1195524421";
	sort(phone_book.begin(), phone_book.end());
	int i = 0;
	while (i < phone_book.size() - 1) {
		if (phone_book[i].compare(phone_book[i + 1].substr(0, phone_book[i].size())) == 0) { printf("false"); return 0; }
		i++;
	}
	printf("true");
	return 0;
}
// 제출
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
	sort(phone_book.begin(), phone_book.end());
	int i = 0;
	while (i < phone_book.size() - 1) {
		if (phone_book[i].compare(phone_book[i + 1].substr(0, phone_book[i].size())) == 0) { return false; }
		i++;
	}
	return true;
}
*/