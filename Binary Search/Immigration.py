# 이분탐색 level 3 입국심사

def solution(n, times):
    left, right = 1, max(times)*n
    while left < right:
        middle = (left+right)//2
        enter = sum([middle//v for v in times])
        if  enter < n:
            left = middle+1
        else:
            right = middle
    return left
