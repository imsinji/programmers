def solution(gems):
    g = set(gems)
    target_len = len(g)
    s = 0

    si = 0
    ei = len(gems) - 1
    min_len = -1
    
    kind_of_gem = dict()

    for e in range(len(gems)):
        if gems[e] in kind_of_gem:
            kind_of_gem[gems[e]] += 1
        else:
            kind_of_gem[gems[e]] = 1

        while True:
            if e-s+1 < target_len:
                break
            
            if target_len == len(kind_of_gem):
                if ei - si > e - s:
                    ei, si = e, s
                    min_len = ei - si + 1
                    if min_len == target_len:
                        return [si+1, ei+1]
                kind_of_gem[gems[s]] -= 1
                if kind_of_gem[gems[s]] == 0:
                    kind_of_gem.pop(gems[s])
                s += 1
            else:
                break

    answer = [si+1, ei+1]
    return answer