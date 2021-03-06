# 연습문제 피보나치 수열 Level 2

import sys
sys.setrecursionlimit(10**7)
farr = [0 for i in range(100002)]
def fib(n):
    if farr[n] == 0 and n != 0:
        farr[n] = (fib(n-1)+fib(n-2)) % 1234567
    return farr[n]

def solution(N):
    farr[0] = 0
    farr[1] = 1
    answer = fib(N)
    return answer
