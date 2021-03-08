# 2019카카오개발자겨울인턴쉽 인형뽑기

def solution(board, moves):
    answer = 0
    poket = []
    for m in moves:
        for b in board:
            if b[m-1] != 0:
                poket.append(b[m-1])
                b[m-1] = 0
                break
        if(len(poket) > 1 and poket[-1] == poket[-2]):
            poket.pop()
            poket.pop()
            answer += 2
    return answer
