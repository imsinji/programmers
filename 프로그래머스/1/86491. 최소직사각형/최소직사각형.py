def solution(sizes):
    max_w = max(map(lambda x: min(x), sizes))
    max_h = max(map(lambda x: max(x), sizes))
    return max_w*max_h