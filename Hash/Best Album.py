# 해시 베스트 앨범 Level 3

def solution(genres, plays):
    answer = []
    dic = { v:0 for v in set(genres) }
    for i in range(len(genres)):
        dic[genres[i]] += plays[i]
        
    top = []
    for i in range(len(genres)):
        top.append([-dic[genres[i]], -plays[i], i])
    top.sort()
    
    temp = top[0][0]
    cnt = 0
    for t in top:
        if cnt == 2 and temp == t[0]:
            continue
        elif cnt == 2 and temp != t[0]:
            temp = t[0]
            cnt = 0
        answer.append(t[2])
        cnt += 1
    
    return answer
