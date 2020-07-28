# 연습문제 124 나라의 숫자 Level 1

def solution(n):
    answer = ''
    while n > 0:
        k = n % 3
        if k == 0:
            k = 3
        if k == 1:
            answer = '1' + answer
        elif k == 2:
            answer = '2' + answer
        else:
            answer = '4' + answer
        n = (n- k)/3
    return answer
