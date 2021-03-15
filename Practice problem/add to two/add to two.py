# 월간 코드 챌린지 시즌1 두개 뽑아서 더하기

from itertools import combinations

def solution(numbers):
    answer = list(set([sum(v) for v in list(combinations(numbers, 2))]))
    return answer.sort()
