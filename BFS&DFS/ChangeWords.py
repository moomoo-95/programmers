# BFS/DFS 단어변환 level 3

def solution(begin, target, words):
    answer = 0
    conn = [begin]
    if not target in words:
        return 0
    while True:
        for c in conn[:]:
            for w in words[:]:
                cnt = 0
                for i in range(len(c)):
                    if c[i] != w[i]:
                        cnt += 1
                if cnt == 1:
                    conn.append(w)
        words = list(set(words) - set(conn))
        answer += 1
        if target in conn:
            return answer
