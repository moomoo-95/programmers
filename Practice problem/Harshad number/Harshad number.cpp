// 연습문제 하샤드 수 Level 1

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int z = x;
    int y = 0;
    while(x > 0) {
        y += x%10;
        x /= 10;
    }
    if(z % y == 0){ return true; }
    
    return false;
}
