# 스택/큐 프린트 Level 2

def solution(priorities, location):
    answer = 0
    while True:
        for i, v in enumerate(priorities):
            if v == max(priorities):
                priorities[i] = 0
                if i == location:
                    return answer+1
                else:
                    answer += 1
