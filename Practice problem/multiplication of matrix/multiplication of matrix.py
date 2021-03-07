# 연습문제 행렬의 곱셈 Level 2

def solution(arr1, arr2):
    answer = []
    for i in  range(len(arr1)):
        tmpl = []
        for j in range(len(arr2[0])):
            tmpi = 0
            for k in range(len(arr1[0])):
                tmpi += arr1[i][k]*arr2[k][j]
            tmpl.append(tmpi)
        answer.append(tmpl)
    return answer
