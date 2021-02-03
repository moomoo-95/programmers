# 그리디 체육복 Level 1

def solution(n, lost, reserve):
    answer = n
    stu = [1 for _ in range(n)]
    for i in range(len(lost)):
        stu[lost[i]-1] -= 1
    for i in range(len(reserve)):
        stu[reserve[i]-1] += 1
        
    for i in range(n):
        if(stu[i] >= 1):
            continue
        elif(stu[i] == 0):
            if(i != 0 and stu[i-1] == 2):
                stu[i-1], stu[i] = 1, 1
            elif(i != n-1 and stu[i+1] == 2):
                stu[i], stu[i+1] = 1, 1
            else:
                answer -= 1
    return answer
