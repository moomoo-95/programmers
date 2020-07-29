//

#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    int[] array = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    long long answer = 0;
    while(1){
        if (n == 0) { break; }
        array[10] += 1;
        int k = (n % 10);
        array[k] += 1;
        n = (n-k)/10;
    }
    
    for(int i = 0; i < array[10]; i++){
        while( array[array[11]] == 0 ){ array[11] += 1; }
        answer = answer + array[11]*pow(10, i);
        array[array[11]] -= 1;
    }
    return answer;
}
