# 연습문제 수박수박수박수? Level 1

def solution(n):
    answer = ''
    for i in range(n) :
        if i % 2 == 0 :
            answer = answer + '수'
        else :
            answer = answer + '박'
    return answer
