# 월간 코드 챌린지 시즌 1 삼각 달팽이

def solution(n):
    answer = []
    if n > 3:
        tri = [[i+1]+[0]*i for i in range(0,n-1)]
        tri.append([i for i in range(n,n+n)])
        for i in range(1, len(tri)):
            tri[i][-1] = 3*n - i - 2
        i, j, code = 2, 1, 1
        for idx in range(3*n-2, (n*(n+1))//2+1):
            tri[i][j] = idx
            if tri[i-1][j-1] != 0 and code == 0:
                code = 1
            elif tri[i+1][j] != 0 and code == 1:
                code = 2
            elif tri[i][j+1] != 0 and code == 2:
                code = 0
            if code == 0:
                i -= 1
                j -= 1
            elif code == 1:
                i += 1
            else:
                j += 1
        for v in tri:
            answer += v
    else:
        if n == 1:
            answer = [1]
        elif n == 2:
            answer = [1, 2, 3]
        else:
            answer = [1, 2, 6, 3, 4, 5]
    return answer
  
  # 개선된 코드
  
  def solution(n):
    answer = []
    tri = [[0]*i for i in range(1, n+1)]
    i, j, val = -1, 0, 1
    for k in range(n):
        for m in range(n-k):
            if k % 3 == 0:
                i += 1
            elif k % 3 == 1:
                j += 1
            else:
                i -= 1
                j -= 1
            tri[i][j] = val
            val += 1
    for v in tri:
        answer += v
    return answer
