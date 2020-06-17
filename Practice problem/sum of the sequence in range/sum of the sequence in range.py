# 연습문제 두 정수 사이의 합 Level 1

def add(a, b):
    result = 0
    for k in range(a, b+1):
        result = result + k
    
    return result

def solution(a, b):
    answer = 0
    if a == b:
        answer = a
    elif a < b:
        answer = add(a, b)
    else:
        answer = add(b, a)
    return answer