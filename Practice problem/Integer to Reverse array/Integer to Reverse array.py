# 연습문제 자연수 뒤집어 배열로 만들기 Level 1

def solution(n):
    answer = []
    while n != 0:
        answer.insert(len(answer), n%10)
        n = (n-n%10)/10
    return answer
