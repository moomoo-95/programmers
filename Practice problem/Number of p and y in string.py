# 연습문제 문자열 내 p와 y의 개수 Level 1

def solution(s):
    count = 0
    for i in range(len(s)):
        if(s[i] == 'p' or s[i] == 'P'):
            count += 1
        elif(s[i] == 'y' or s[i] == 'Y'):
            count -= 1
    if(count == 0):
        return True
    else:
        return False
