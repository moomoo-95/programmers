# 완전탐색 카펫 Level 2

def solution(brown, yellow):
    answer = []
    i = 1
    temp = yellow
    while(len(answer) == 0):
        if (brown == temp*2 + (i+2)*2):
            answer.append(temp+2)
            answer.append(i+2)
            break
        while(yellow % (i+1) != 0):
            i += 1
        i += 1
        temp = yellow / i
    return answer
