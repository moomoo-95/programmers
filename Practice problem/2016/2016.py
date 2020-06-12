def solution(a, b):
    month = [ 0, 31, 60, 91, 121, 152, 182,213, 244, 274, 305, 335 ]
    day = ['THU', 'FRI', 'SAT', 'SUN', 'MON', 'TUE', 'WED']
    answer = day[(month[a - 1] + b) % 7]
    return answer