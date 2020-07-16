# 연습문제 하샤드 수 Level 1

def solution(x):
    z = x
    y = 0
    while z > 0:
        y += z%10
        z -= z%10
        z /= 10
    if ((x % y) == 0 ):
        return True
    else:
        return False
