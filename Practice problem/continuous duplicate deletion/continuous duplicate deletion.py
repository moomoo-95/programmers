# 연습문제 같은 숫자는 싫어 Level 1

def solution(arr):
    answer = []
    answer.append(arr[0])
    for i in range(0, len(arr)):
        if answer[len(answer) - 1] != arr[i] :
            answer.append(arr[i])
    return answer
