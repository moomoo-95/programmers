# 스택/큐 기능개발 Level 2

def solution(progresses, speeds):
    answer = []
    deploy, predep = 0, 0
    check = True
    while check:
        for i in range(deploy, len(progresses)):
            progresses[i] += speeds[i]
        if progresses[deploy] >= 100:
            predep = deploy
            for i in range(deploy, len(progresses)):
                if progresses[i] < 100:
                    deploy = i
                    answer.append(deploy-predep)
                    break
            if predep == deploy:
                check = False
                answer.append(len(progresses) - deploy)
    return answer
