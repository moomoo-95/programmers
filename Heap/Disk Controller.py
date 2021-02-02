# 힙 디스크 컨트롤러 Level 3
import heapq

def solution(jobs):
    answer = 0
    jobs.sort()
    timer = jobs[0][0]
    n = len(jobs)
    
    heap = []
    i = 0
    while( i != len(jobs) or len(heap) != 0):
        while( i != len(jobs) and jobs[i][0] <= timer):
            heapq.heappush(heap, [jobs[i][1], jobs[i][0]])
            i += 1
        if (len(heap) != 0):
            check = heapq.heappop(heap)
            timer += check[0]
            answer += timer - check[1]
        elif (timer < jobs[i][0]):
            timer = jobs[i][0]
            
    return answer // n
