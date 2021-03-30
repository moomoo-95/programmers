import numpy as np

def solution(n):
    return (np.sqrt(n)+1)**2 if np.sqrt(n) % 1.0 == 0 else -1
