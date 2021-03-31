# 여름/겨울 코딩 2018 예산

def solution(d, budget):
    d.sort()
    tmp = 0
    for i in range(len(d)):
        tmp += d[i]
        if budget < tmp:
            return i
    return len(d)
