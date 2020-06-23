# 연습문제 짝수와 홀수  Level 1

def solution(num):
    answer = 'Even'
    if (num % 2 == 1) | (num % 2 == -1) :
        answer = 'Odd'
    return answer
