# Summer/Winter Coding(2019) 멀쩡한 사각형


import math
def solution(w,h):
    return w*h - (w+h-math.gcd(w,h))
