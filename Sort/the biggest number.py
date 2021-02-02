# 정렬 가장 큰 수 Level 2

from functools import cmp_to_key
def comp(a, b):
    x, y = str(a), str(b)
    if (x + y <= y + x):
        return 1
    else:
        return -1

def solution(numbers):
    answer = ""
    numbers = sorted(numbers, key=cmp_to_key(comp))
    for i in range(len(numbers)):
        answer += str(numbers[i])
    if (answer[0] == '0'):
        answer = "0"
    return answer
