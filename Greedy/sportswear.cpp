// 그리디 체육복 Level 1

//도난당한 친구들 체육복 빌려주기
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> stu;
    for(int i = 0; i < n; i++){
        stu.push_back(1);
    }
    for(int i = 0; i < lost.size(); i++){
        stu[lost[i]-1]--;
    }
    for(int i = 0; i < reserve.size(); i++){
        stu[reserve[i]-1]++;
    }
    for(int i = 0; i < stu.size()-1; i++){
        if(stu[i] == 0 && i == 0){
            if(stu[i+1] == 2){
                stu[i]++;
                stu[i+1]--;
            }
        }
        else if(stu[i] == 0 && stu[i-1] == 2){
            stu[i]++;
            stu[i-1]--;
        }
        else if(stu[i] == 0 && stu[i+1] == 2){
            stu[i]++;
            stu[i+1]--;
        }
        else if((stu[i] == 2 && i == stu.size()-2) && stu[i+1] == 0){
            stu[i]--;
            stu[i+1]++;
            
        }
    }
    int answer = 0;
    for(int i = 0; i < stu.size(); i++){
        printf("%d ", stu[i]);
        if(stu[i] >= 1){ answer++;}
    }
    return answer;
}
