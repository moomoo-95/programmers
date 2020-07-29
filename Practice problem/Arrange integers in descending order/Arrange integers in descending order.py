# 연습문제 정수 내림차순으로 배치하기 Level 1

def solution(n):
    array = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    answer = 0
    while(1):
        if n == 0:
            break
        array[10] += 1
        k = (int)(n % 10)
        array[k] += 1
        n = (n-k)/10
    print(array)
    for i in range(array[10]):
        while array[array[11]]== 0:
            array[11] += 1
        answer = answer + array[11]*(10**i)
        array[array[11]] -= 1
    return answer
