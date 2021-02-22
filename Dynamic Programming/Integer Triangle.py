# 동적계획법 level 3 정수 삼각형

def solution(triangle):
    dp = [[0 for _ in range(i)] for i in range(1, len(triangle)+1)]
    dp[0][0] = triangle[0][0]
    for i in range(len(dp)-1):
        for j in range(len(dp[i])):
            if dp[i+1][j] < triangle[i+1][j] + dp[i][j]:
                dp[i+1][j] = triangle[i+1][j] + dp[i][j]
            if dp[i+1][j+1] < triangle[i+1][j+1] + dp[i][j]:
                dp[i+1][j+1] = triangle[i+1][j+1] + dp[i][j]
    return max(dp[-1])
