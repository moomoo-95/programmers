// 2020카카오인턴쉽 인형뽑기

// moves에서 제시한 열을 위에부터 차례로 탐색하여 stick에 넣고 top과 같으면 안넣고 2를더함
#include <string>
#include <vector>
#include <stack>

#include <iostream>
using namespace std;

void main() {
	vector<vector<int>> board = {{0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1}};
	vector<int> moves = { 1,5,3,5,1,2,1,4 };
	stack<int> stick;

	int answer = 0;

	stick.push(0);
	for (int i = 0; i < moves.size(); i++) {
		for (int k = 0; k < board.size(); k++) {
			if (board[k][moves[i]-1] == 0) { continue; }
			else {
				if (stick.top() == board[k][moves[i]-1]) {
					stick.pop();
					answer += 2;
				}
				else {
					stick.push(board[k][moves[i]-1]);
				}
				board[k][moves[i]-1] = 0;
				break;
			}
		}
	}
	

	cout << answer << endl;
}

//제출
/*
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    stack<int> stick;
    int answer = 0;
    
    stick.push(0);
	for (int i = 0; i < moves.size(); i++) {
		for (int k = 0; k < board.size(); k++) {
			if (board[k][moves[i]-1] == 0) { continue; }
			else {
				if (stick.top() == board[k][moves[i]-1]) {
					stick.pop();
					answer += 2;
				}
				else {
					stick.push(board[k][moves[i]-1]);
				}
				board[k][moves[i]-1] = 0;
				break;
			}
		}
	}
    
    return answer;
}
*/
