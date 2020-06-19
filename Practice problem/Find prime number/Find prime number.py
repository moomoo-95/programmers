# 연습문제 소수 찾기 Level 1

from math import sqrt, ceil
def solution(n):
    primelist = []
    answer = 0
    for candidate in range(2, n + 1):
        is_prime = True
        root = ceil(sqrt(candidate))
        for prime in primelist:
            if prime > root:
                break
            if candidate % prime == 0:
                is_prime = False
                break
        if is_prime:
            primelist.append(candidate)
            answer += 1
    return answer