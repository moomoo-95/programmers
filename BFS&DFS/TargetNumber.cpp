# BFS/DFS 타겟넘버 level 2

answer = 0
def dfs(num, numbers, target, value):
    global answer
    last = len(numbers);
    if(num == last and target == value):
        answer += 1
        return
    elif(num == last and target != value):
        return
    
    dfs(num+1, numbers, target, value + numbers[num])
    dfs(num+1, numbers, target, value - numbers[num])
    
def solution(numbers, target):
    global answer
    dfs(0, numbers, target, 0)
    return answer
