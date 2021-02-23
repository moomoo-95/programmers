# 동적계획법 level 3 등굣길

def solution(m, n, puddles):
    dp = [[0]*(m+1) for j in range(n+1)]
    dp[1][1] = 1
    
    for i in range(1, len(dp)):
        for j in range(1, len(dp[i])):
            if i==1 and j==1:
                continue
            if [j, i] in puddles:
                dp[i][j] = 0
            else:
                dp[i][j] = dp[i-1][j] + dp[i][j-1]
    return dp[n][m] % 1000000007
