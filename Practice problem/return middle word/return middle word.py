def solution(s):
    if len(s) % 2 == 1:
	    return s[(len(s)) // 2]
    else: 
        return s[(len(s)-1) // 2:((len(s)-1) // 2)+2]

s = solution("abcde")
print(s)
s = solution("wear")
print(s)