# 연습문제 약수의 합

def solution(n):
    answer = 0
    for i in range(1, n+1):
        answer += i if n%i==0 else 0
    
    return answer
