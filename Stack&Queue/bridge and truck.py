# 스택/큐 다리를 지나는 트럭 Level 2

def solution(bridge_length, weight, truck_weights):
    answer = 0
    bri = []
    while True:
        if(len(bri) == 0 and len(truck_weights) == 0):
            break
        answer += 1
        if len(bri) != 0:
            if answer > bri[0][1] + bridge_length-1:
                del bri[0]
        if len(truck_weights) != 0:
            if weight >= (sum(v[0] for v in bri ) + truck_weights[0]):
                bri.append([truck_weights[0], answer])
                del truck_weights[0]
    return answer
