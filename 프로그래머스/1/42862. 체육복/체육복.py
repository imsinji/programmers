def solution(n, lost, reserve):
    count = 0
    search = [-1, 1]
    l = set(lost)
    r = set(reserve)
    i = l.intersection(r)
    d_lost = l.difference(r)
    d_reserve = r.difference(l)

    answer = list(i)
    for l in d_lost:
        for s in [-1,1]:
            target = l + s
            if target in d_reserve:
                d_reserve.remove(target)
                answer.append(target)
                break

    return n + len(answer) - len(lost)