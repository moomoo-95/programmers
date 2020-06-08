//�ؽ� Level 2

//��ȭ��ȣ�� �� �� ��ȣ�� �ٸ� ��ȣ�� ���ξ��� ��� ã��
//phone_book ���� ���� �� n��°�� n+1��°���� 0���� n�� ũ�⸸ŭ�� ���꽺Ʈ���� �� ������ false, �ٺ��� ���ٸ� true
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
// ����
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