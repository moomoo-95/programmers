# 해시 위장 Level 2

def solution(clothes):
    answer = 1
    spy = {}
    for v in clothes:
        if v[1] in spy:
            spy[v[1]] += 1
        else:
            spy[v[1]] = 2
    for v in spy.values():
        answer *= v
    answer -= 1
    return answer
