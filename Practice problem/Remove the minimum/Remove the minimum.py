# 연습문제 제일 작은 수 제거하기 Level 1

def solution(arr):
    answer = []
    arr.remove(min(arr))
    if len(arr) == 0:
        answer.append(-1)
    else:
        answer = arr
    return answer
