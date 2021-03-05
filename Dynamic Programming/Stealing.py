# 동적계획법 level 4 도둑질

# dp[n] = max(dp[n-1], money[n]+ dp[n-2])
def solution(money):
    dp1, dp2 = [0]* len(money), [0]* len(money)
    dp1[0], dp1[1] = money[0], max(money[0], money[1])
    dp2[0], dp2[1] = 0, money[1]
    for i in range(2, len(dp1) - 1):
        dp1[i] = max(dp1[i-1], money[i] + dp1[i-2])
        dp2[i] = max(dp2[i-1], money[i] + dp2[i-2])
    dp2[-1] = max(dp2[-2], money[-1] + dp2[-3])
    return max(max(dp1), max(dp2))
