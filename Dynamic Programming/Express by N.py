# 동적 계획법 level 3 N으로 표현

def solution(N, number):
    answer = -1
    if (N == number):
        return 1
    dp = [{int(str(N)*i)} for i in range(1, 9)]
    
    for i in range(1, 8):
        for j in range(i):
            for d1 in dp[j]:
                for d2 in dp[i-j-1]:
                    dp[i].add(d1+d2)
                    dp[i].add(d1-d2)
                    dp[i].add(d1*d2)
                    if (d2 != 0):
                        dp[i].add(int(d1/d2))
        if(number in dp[i]):
            return i+1
    return answer
