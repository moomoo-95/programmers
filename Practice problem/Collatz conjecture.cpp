// 연습문제 콜라츠 추측 Level 1

using namespace std;

int solution(int num) {
    long long N = num;
    int answer = 0;
    while(N != 1){
        if(N % 2 == 0){N /= 2;}
        else{N = N*3 + 1;}
        answer++;
        if(answer == 500) {
            answer = -1;
            break;
        }
    }
    return answer;
}
