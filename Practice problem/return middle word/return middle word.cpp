#include <string>

using namespace std;

string solution(string s) {
	if (s.size() % 2 == 1) { 
		return s.substr(s.size() / 2, 1); }
	else { 
		return s.substr((s.size() - 1) / 2, 2); 
	}
}