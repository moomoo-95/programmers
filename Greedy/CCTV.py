# 그리디 단속카메라 level 3

def solution(routes):
    routes.sort(key=lambda x : x[1])
    answer, k = 1, 0
    
    while(k < len(routes)):
        sole = True
        check = [routes[k][0], routes[k][1]]
        k += 1
        
        for i in range(k, len(routes)):
            check = [max(check[0], routes[i][0]), min(check[1], routes[i][1])]
            
            if(check[0] <= check[1]):
                continue
            else:
                k = i
                answer += 1
                sole = False
                break
    return answer
    
# 더 효율적인 코드
#     def solution(routes):
#     answer, camera = 0, -30001
#     routes.sort(key=lambda x: x[1]) 

#     for path in routes:
#         if camera < path[0]:
#             answer += 1
#             camera = path[1]
#     return answer
