# 연습문제 소수 찾기 Level 1

#include <cmath>

using namespace std;

int solution(int n) {
    int primelist[500000] = {0};
    int answer = 0;
    bool is_prime = true;
    int root = 0;
    for(int i = 2; i < n+1 ; i++){
        is_prime = true;
        root = ceil(sqrt(i));
        for(int j = 0; primelist[j] != 0 && primelist[j] <= root ; j++){
            if (i % primelist[j] == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primelist[answer] = i;
            answer++;
        }
    }
    return answer;
}
