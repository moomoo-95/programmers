# 연습문제 이상한 문자 만들기

def solution(s):
    answer = ''
    idx = 0
    for i in s:
        if ord(i) == 32:
            answer = answer + i
            idx = 0
            continue
        elif idx % 2 == 0:
            answer = answer + i.upper()
        else:
            answer = answer + i.lower()
        idx += 1
    return answer
