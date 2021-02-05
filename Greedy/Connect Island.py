# 그리드 섬 연결하기 level 3

def solution(n, costs):
    answer = 0
    costs.sort(key = lambda x : x[2])
    route = set([costs[0][0]])
    while(len(route) != n):
        for i, node in enumerate(costs):
            if(node[0] in route and node[1] in route):
                continue
            elif(node[0] in route or node[1] in route):
                route.update([node[0], node[1]])
                answer += node[2]
                costs.pop(i)
                break
    return answer
