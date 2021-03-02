# 해시 완주하지 못한자 Level 1

def solution(participant, completion):
    participant.sort()
    completion.sort()
    for i, v in enumerate(completion):
        if v == participant[i]:
            continue
        else:
            return participant[i]
    return participant[-1]
