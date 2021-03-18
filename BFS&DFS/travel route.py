# BFS&DFS 여행경로

def solution(tickets):
    tickets.sort(reverse=True)
    dic = dict()
    for s, d in tickets:
        if s in dic:
            dic[s].append(d)
        else:
            dic[s] = [d]
    answer = []
    route = ['ICN']
    while len(route) != 0:
        top = route[-1]
        if top not in dic or len(dic[top]) == 0:
            answer.append(route.pop())
        else:
            route.append(dic[top].pop())
    answer.reverse()
    return answer
