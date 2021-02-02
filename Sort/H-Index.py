# 정렬 H-Index Level 2

def solution(citations):
    answer = 0
    citations.sort(reverse=True)
    for h in range(1, len(citations)+1):
        if(h <= citations[h-1]):
            answer = h
    return answer
