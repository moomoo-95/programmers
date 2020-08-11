#

def solution(n):
    answer = []
    while n != 0:
        answer.insert(len(answer), n%10)
        n = (n-n%10)/10
    return answer
