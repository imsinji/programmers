def solution(clothes):
    d = dict()
    for item, category in clothes:
        if category in d:
            d[category] += 1
        else:
            d[category] = 1
    
    answer = 1
    for count in d.values():
        answer *= (count + 1)
    return answer-1