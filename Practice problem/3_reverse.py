# 월간 코드 챌린지 시즌1 3진법 뒤집기

def solution(n):
    answer = 0
    three = ""
    while n != 0:
        three += str(n % 3)
        n = n // 3
    for i in range(len(three)):
        answer += int(three[i])*(3**(len(three)-i-1))
    return answer
