# 2020카카오 인턴쉽 키패드 누르기

def solution(numbers, hand):
    answer = ''
    ll, rl = 10, 12
    for v in numbers:
        if v in [1, 4, 7]:
            answer += 'L'
            ll = v
        elif v in [3, 6, 9]:
            answer += 'R'
            rl = v
        else:
            t = 11 if v == 0 else v
            if abs(ll-t)//3 + abs(ll-t)%3 < abs(rl-t)//3 + abs(rl-t)%3:
                answer += 'L'
                ll = t
            elif abs(ll-t)//3 + abs(ll-t)%3 > abs(rl-t)//3 + abs(rl-t)%3:
                answer += 'R'
                rl = t
            else:
                if hand == "left":
                    answer += 'L'
                    ll = t
                else:
                    answer += 'R'
                    rl = t
    return answer
