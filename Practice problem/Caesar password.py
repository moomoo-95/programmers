# 연습문제 시저암호

def solution(s, n):
    answer = ''
    for c in s:
        if ord(c) == 32:
            answer += c
        elif ord(c) < 95:
            answer += chr(ord(c)+n) if ord(c)+n < 91 else chr(ord(c)+n-26)
        else:
            answer += chr(ord(c)+n) if ord(c)+n < 123 else chr(ord(c)+n-26)
            
    return answer
