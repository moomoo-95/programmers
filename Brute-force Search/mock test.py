# 완전탐색 모의고사 Level 1

def solution(answers):
    answer = []
    user = [[1, 2, 3, 4, 5],
            [2, 1, 2, 3, 2, 4, 2, 5], [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]]
    score = [0, 0, 0]
    for i in range(len(answers)):
        if(answers[i] == user[0][i%5]):
            score[0] += 1
        if(answers[i] == user[1][i%8]):
            score[1] += 1
        if(answers[i] == user[2][i%10]):
            score[2] += 1
    for i in range(len(score)):
        if(max(score) == score[i]):
            answer.append(i+1)
    return answer
