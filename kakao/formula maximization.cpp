// 2020카카오 인턴쉽 수식 최대화

#include <string>
#include <vector>

#include <iostream>
using namespace std;

long long calcul(long long a, long long b, string x) {
	if (x.compare("*") == 0) { return a*b; }
	else if (x.compare("+") == 0) { return a+b; }
	else { return a-b; }
}

long long prio_calcul(vector<string> cal, vector<string> temp_cal, vector<long long> temp_l) {
	for (int i = 0; i < cal.size(); i++) {
		for (int k = 0; k < temp_cal.size();) {
			if (temp_cal[k].compare(cal[i]) == 0) {
				temp_l[k] = calcul(temp_l[k], temp_l[k + 1], temp_cal[k]);
				temp_cal.erase(temp_cal.begin() + k);
				temp_l.erase(temp_l.begin() + (k + 1));
			}
			else { k++; }

		}
	}
	if (temp_l[0] < 0) { return -temp_l[0]; }
	else { return temp_l[0]; }
}

long long solution(string expression) {
	long long answer = 0;
	vector<string> cal = { "*", "+", "-"};
	vector<string> new_cal;
	vector<string> temp_cal;
	vector<long long> temp_l;
	string temp;
	for (int i = 0; i < cal.size(); i++) {
		if (expression.find(cal[i]) > expression.length()) { cal.erase(cal.begin()+i); }
	}
	for (int i = 0; i < expression.size(); i++) {
		for (int k = 0; k < cal.size(); k++) {
			if (expression.substr(i, 1).compare(cal[k]) == 0) {
				temp_l.push_back(atoll(temp.c_str()));
				temp = "";
				temp_cal.push_back(cal[k]);
				i++;
				break;
			}
		}
		temp += expression.substr(i, 1);
	}
	temp_l.push_back(atoll(temp.c_str()));

	new_cal = cal;
	answer = prio_calcul(new_cal, temp_cal, temp_l);
	if (cal.size() == 2) {
		new_cal[1] = cal[0];
		new_cal[0] = cal[1];
		if (answer < prio_calcul(new_cal, temp_cal, temp_l)) {
			answer = prio_calcul(new_cal, temp_cal, temp_l);
		}
	}
	else if (cal.size() == 3) {
		for (int k = 0; k < new_cal.size(); k++) {
			new_cal[0] = cal[k];
			new_cal[1] = cal[(k + 1) % 3];
			new_cal[2] = cal[(k + 2) % 3];
			if (answer < prio_calcul(new_cal, temp_cal, temp_l)) {
				answer = prio_calcul(new_cal, temp_cal, temp_l);
			}
			new_cal[1] = cal[(k + 2) % 3];
			new_cal[2] = cal[(k + 1) % 3];
			if (answer < prio_calcul(new_cal, temp_cal, temp_l)) {
				answer = prio_calcul(new_cal, temp_cal, temp_l);
			}
		}
	}
	


	for (int i = 0; i < temp_cal.size(); i++) {
		cout << temp_cal[i] << endl;
	}
	for (int i = 0; i < temp_l.size(); i++) {
		cout << temp_l[i] << endl;
	}
    return answer;
}
