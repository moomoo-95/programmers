# 2020카카오 인턴쉽 수식 최대화

from itertools import permutations

def calcul(a, b, c):
    if c == '-':
        return a - b
    elif c == '+':
        return a + b
    else:
        return a * b

def solution(expression):
    answer, num, cal, case = 0, [], [], []
    
    for c in ['-', '+', '*']:
        if c in expression:
            case.append(c)
    case = list(permutations(case, len(case)))
    
    for i in range(len(expression)):
        if expression[i] in ['-', '+', '*']:
            cal.append(expression[i])
            num.append(int(expression[answer:i]))
            answer = i+1
    num.append(int(expression[answer:]))
    answer = 0
    
    for c in case:
        tnum, tcal = num[:], cal[:]
        for cv in c:
            while cv in tcal:
                i = tcal.index(cv)
                tnum[i+1] = calcul(tnum[i], tnum[i+1], tcal[i])
                del tnum[i]
                del tcal[i]
        answer = abs(tnum[0]) if abs(tnum[0]) > answer else answer
    
    return answer
