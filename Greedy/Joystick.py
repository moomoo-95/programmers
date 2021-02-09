# 그리디 level 2 조이스틱
# 아스키 코드 A Z, 65 90
def solution(name):
    change = [min(ord(i) - ord('A'), ord('Z') - ord(i) + 1) for i in name]
    answer, cursor = 0, 0
    
    while (True):
        answer += change[cursor]
        change[cursor] = 0
        if sum(change) == 0:
            return answer
        
        l, r = 1, 1
        while ( change[cursor-l % len(name)] == 0 ):
            l += 1
        while ( change[cursor+r % len(name)] == 0 ):
            r += 1
        answer += l if l < r else r
        cursor += -l if l < r else r
