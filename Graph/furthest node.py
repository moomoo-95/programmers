# 그래프 가장 먼 노드

def solution(n, edge):
    dic = dict()
    for e in edge:
        dic.setdefault(e[0], []).append(e[1])
        dic.setdefault(e[1], []).append(e[0])
    q = [[1, 0]]
    check = [-1]*(n+1)
    while len(q) != 0:
        tmp = q.pop(0)
        check[tmp[0]] = tmp[1]
        for v in dic[tmp[0]]:
            if check[v] == -1:
                check[v] = 0
                q.append([v, tmp[1]+1])
    return check.count(max(check))
