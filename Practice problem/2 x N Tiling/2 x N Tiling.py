# 연습문제 2 x n 타일링 Level 3

import sys
sys.setrecursionlimit(60000)
dp = [0 for i in range(60000)]
def func(n):
    if dp[n-1] == 0:
        dp[n-1] = (func(n-1)+func(n-2)) % 1000000007
    return dp[n-1]

def solution(N):
    dp[0] = 1
    dp[1] = 2
    answer = func(N)
    return answer
