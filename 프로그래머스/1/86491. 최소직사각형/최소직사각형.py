def solution(sizes):
    max_w = 0
    max_h = 0
    for size in sizes:
        w, h = 0, 0
        if size[0] > size[1]:
            w = size[0]
            h = size[1]
        else:
            w = size[1]
            h = size[0]
        if max_w < w:
            max_w = w
        if max_h < h:
            max_h = h

    answer = max_w * max_h
    return answer