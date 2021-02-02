# 완전탐색 소수 찾기 level 2

import math
from itertools import permutations

def prime_check(number):
    if(number < 2):
        return False
    check = math.sqrt(number)
    for i in range(2, int(check)+1):
        if( number % i == 0):
            return False
    return True

def solution(numbers):
    answer = []
    for i in range(1, len(numbers)+1):
        numset = list(set(map("".join, permutations(list(numbers), i))))
        for j in range(len(numset)):
            if(prime_check(int(numset[j]))):
                answer.append(int(numset[j]))
    return len(set(answer))
