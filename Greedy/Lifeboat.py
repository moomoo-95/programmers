# 그리디 구명보트 level 2

def solution(people, limit):
    answer = 0
    people.sort(reverse=True)
    big, small = 0, len(people) - 1
    while ( big <= small ):
        if(people[big]+people[small] <= limit):
            answer += 1
            big += 1
            small -= 1
        else:
            answer += 1
            big += 1
    return answer
