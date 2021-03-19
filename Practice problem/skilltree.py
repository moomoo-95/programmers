# Summer/Winter Coding(~2018) 스킬트리

def solution(skill, skill_trees):
    answer = len(skill_trees)
    for st in skill_trees:
        idx = 0
        for s in st:
            if s in skill:
                if s == skill[idx]:
                    idx += 1
                else:
                    answer -= 1
                    break
    return answer
