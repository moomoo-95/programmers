# 그래프 순위

def solution(n, results):
    answer = 0
    ply = {i:[set(), set()] for i in range(1, n+1)}
    for r in results:
        ply[r[0]][1].add(r[1])
        ply[r[1]][0].add(r[0])
    for i in ply:
        wq = list(ply[i][0])
        while len(wq) != 0:
            q = wq.pop(0)
            for qq in ply[q][0]:
                if qq not in wq:
                    wq.append(qq)
            ply[i][0] = ply[i][0] | ply[q][0]
        lq = list(ply[i][1])
        while len(lq) != 0:
            q = lq.pop(0)
            for qq in ply[q][1]:
                if qq not in lq:
                    lq.append(qq)
            ply[i][1] = ply[i][1] | ply[q][1]
    for i in ply:
        if len(ply[i][0]) + len(ply[i][1]) == n-1:
            answer += 1
    return answer
