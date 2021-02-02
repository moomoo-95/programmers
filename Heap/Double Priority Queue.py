# 힙 이중우선순위큐 level 3
import heapq

def solution(operations):
    answer = []
    heap = []
    check = []
    for i in range(len(operations)):
        check = operations[i].split()
        if ( check[0] == 'I'):
            heapq.heappush(heap, int(check[1]))
        elif (check[0] == 'D' and len(heap) > 0):
            if (check[1] == '1'):
                heap.pop(heap.index(max(heap)))
            elif (check[1] == '-1'):
                heapq.heappop(heap)
    if(len(heap) == 0):
        answer = [0, 0]
    else:
        answer = [max(heap),heap[0]]
    return answer
