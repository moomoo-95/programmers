# 그리드 큰 수 만들기 level 2

def solution(number, k):
    stack = [number[0]]
    for i in range(1, len(number)):
        while( (len(stack) != 0 and stack[-1] < number[i]) and k != 0):
            stack.pop()
            k -= 1
        if (i == len(number)-1 and k != 0):
            for j in range(k-1):
                stack.pop()
            number = ""
            break
        else:
            stack.append(number[i])
            if (k == 0):
                number = number[i+1:]
                break
    return "".join(stack) + number
