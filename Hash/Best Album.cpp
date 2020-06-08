// �ؽ� ����Ʈ �ٹ� Level 3

// �帣�� ����Ʈ 2�� �̱�, �帣 ������� ������ ����
// �帣 �� ������� ���� map ���� �� vector�� ��ȯ�Ͽ� �������� ����
// ������ �帣����, ��������͸� <�����, <������ȣ, �帣>>���ͷ� ���� �� ��������� ������������
//���� �帣�������� �ִ� 2���� ����� ���� ������ answer�� ����
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

bool desc(pair<int, string> a, pair<int, string> b) {
	return a.first > b.first;
}
bool desc2(pair<int, pair<int, string>> a, pair<int, pair<int, string>> b) {
	return a.first > b.first;
}
void main(void) {
	vector<string> genres;
	vector<int> plays;
	map<string, int> temp;
	vector<pair<int, string>> tempv;
	vector<pair<int, pair<int, string>>> best;
	map<string, int>::iterator iter;
	vector<int> answer;
	genres.push_back("classic");
	genres.push_back("pop");
	genres.push_back("classic");
	genres.push_back("ballade");
	genres.push_back("classic");
	genres.push_back("pop");
	genres.push_back("pop");
	plays.push_back(500);
	plays.push_back(600);
	plays.push_back(150);
	plays.push_back(2000);
	plays.push_back(800);
	plays.push_back(2500);
	plays.push_back(600);
	for (int i = 0; i < genres.size(); i++) {
		cout << genres[i] << " " << plays[i] << endl;
	}
	//map�� ����
	for (int i = 0; i < genres.size(); i++) {
		temp[genres[i]] += plays[i];
	}
	cout << temp["classic"] << " " << temp["pop"] << endl;
	//map �� vector�� ��ȯ�� �������� ���� �帣 ���� ����
	for (iter = temp.begin(); iter != temp.end(); iter++) {
		tempv.push_back(make_pair(iter->second, iter->first));
	}
	sort(tempv.begin(), tempv.end(), desc);
	cout << "===================" << endl;
	for (int i = 0; i < tempv.size(); i++) {
		cout << tempv[i].first << " " << tempv[i].second << endl;
	}
	//�帣�� �������� <����� <������ȣ, �帣>>
	for (int i = 0; i < genres.size(); i++) {
		best.push_back(make_pair(plays[i], make_pair(i, genres[i])));
	}
	sort(best.begin(), best.end(), desc2);
	cout << "===================" << endl;
	for (int i = 0; i < best.size(); i++) {
		cout << best[i].first << " " << best[i].second.first << " " << best[i].second.second << endl;
	}
	for (int i = 0; i < tempv.size(); i++) {
		int count = 0;
		for (int j = 0; j < best.size();) {
			if (count == 2) { break; }
			if (tempv[i].second.compare(best[j].second.second) == 0) {
				answer.push_back(best[j].second.first);
				best.erase(best.begin() + j);
				count++;
			}
			else { j++; }
		}
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << endl;
	}
}

// ����

/*
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool desc(pair<int, string> a, pair<int, string> b) {
	return a.first > b.first;
}
bool desc2(pair<int, pair<int, string>> a, pair<int, pair<int, string>> b) {
	return a.first > b.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
	map<string, int> temp;
	vector<pair<int, string>> tempv;
	vector<pair<int, pair<int, string>>> best;
	map<string, int>::iterator iter;
	vector<int> answer;

	for (int i = 0; i < genres.size(); i++) {
		temp[genres[i]] += plays[i];
	}
	for (iter = temp.begin(); iter != temp.end(); iter++) {
		tempv.push_back(make_pair(iter->second, iter->first));
	}
	sort(tempv.begin(), tempv.end(), desc);
	for (int i = 0; i < genres.size(); i++) {
		best.push_back(make_pair(plays[i], make_pair(i, genres[i])));
	}
	sort(best.begin(), best.end(), desc2);
	for (int i = 0; i < tempv.size(); i++) {
		int count = 0;
		for (int j = 0; j < best.size();) {
			if (count == 2) { break; }
			if (tempv[i].second.compare(best[j].second.second) == 0) {
				answer.push_back(best[j].second.first);
				best.erase(best.begin() + j);
				count++;
			}
			else { j++; }
		}
	}
	return answer;
}
*/