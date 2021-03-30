# 2018 카카오 블라인드 [1차]추석 트래픽

def solution(lines):
    answer = 0
    time = []
    for l in lines:
        tmp = 0.0
        for i, v in enumerate(l.split(" ")[1].split(":")):
            tmp += round(float(v)*float((60**(2-i))), 3)
        time.append([round(tmp - float(l.split(" ")[2][:-1])+0.001, 3), tmp])
    for t in time:
        cnt1, cnt2 = 0, 0
        srt1, end1 = t[0], round(t[0] + 0.999, 3)
        srt2, end2 = t[1], round(t[1] + 0.999, 3)
        for tt in time:
            if (srt1 <= tt[1] and end1 >= tt[0]):
                cnt1 += 1
            if (srt2 <= tt[1] and end2 >= tt[0]):
                cnt2 += 1
        answer = max(answer, cnt1, cnt2)
    return answer
