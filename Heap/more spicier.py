# 힙 더 맵게 Level 2
import heapq

def solution(scoville, K):
    answer = 0
    heap = []
    
    for i in range(len(scoville)):
        heapq.heappush(heap, scoville[i])
        
    temp = heapq.heappop(heap)
    
    while (temp < K and len(heap)!=0):
        temp += heapq.heappop(heap)*2
        heapq.heappush(heap, temp)
        temp = heapq.heappop(heap)
        answer += 1
    if(temp < K):
        answer = -1
    return answer
