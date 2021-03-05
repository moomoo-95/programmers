# 연습문제 콜라츠 추측 Level 1

def solution(num):
    answer = 0
    while answer <= 500:
        if num == 1:
            return answer
        num = int(num / 2) if num % 2 == 0 else num*3+1
        answer += 1
    return -1
