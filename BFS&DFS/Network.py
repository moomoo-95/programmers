# BFS/DFS 네트워크 level 3

def solution(n, computers):
    net = [{i} for i in range(len(computers))]
    for i in range(len(computers)):
        for j in range(i, len(computers)):
            if computers[i][j] == 1:
                idx, jdx = 0, 0
                for k in range(len(net)):
                    if i in net[k]:
                        idx = k
                    if j in net[k]:
                        jdx = k
                if idx != jdx:
                    net[idx] = net[idx].union(net[jdx])
                    del net[jdx]
    return len(net)
