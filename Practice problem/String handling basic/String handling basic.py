# 연습문제 문자열 다루기 기본 Level 1

def solution(s):
    if len(s) != 4 and len(s) != 6:
        return False
    for i in range(len(s)):
        if ord(s[i]) > 57 or ord(s[i]) < 48:
            return False
    return True
