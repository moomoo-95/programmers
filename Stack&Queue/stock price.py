# 스택/큐 주식가격 Level 2

def solution(prices):
    answer = []
    for i in range(len(prices)-1):
        check = True
        for j in range(i+1, len(prices)):
            if prices[i] > prices[j]:
                check = False
                answer.append(j-i)
                break
        if check:
            answer.append(len(prices)-i-1)
    answer.append(0)
    return answer
