# 이분탐색 level 4 징검다리

def solution(distance, rocks, n):
    answer, left, right = 0, 1, distance
    rocks.sort()
    rocks.append(distance)
    while left < right:
        middle = (left+right)//2
        mini = middle
        start, dist = 0, 0
        for v in rocks:
            if v-start < middle:
                dist += 1
            else:
                mini = min(mini, v-start)
                start = v
        if dist > n:
            right = middle
        else:
            answer = mini
            left = middle +1
    return answer
