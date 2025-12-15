def make_dict(roads, n):
    graph = {}
    for f, t in roads:
        if f <= n and t <= n:
            graph.setdefault(f, set()).add(t)
            graph.setdefault(t, set()).add(f)
    return graph

def find_road(dictionary, f, t, d):
    # print('start', f, t, d)
    if f == t:
        # print('a', f, t)
        return d
    elif f in dictionary:
        if t in dictionary[f]:
            d += 1
            # print('b', f, t, d)
            return d
        for v in dictionary[f]:
            d = find_road(dictionary, v, t, d)
            if d != -1:
                # print('c', v, t, d)
                d += 1
                return d
    else:
        return -1

def solution(n, roads, sources, destination):
    dictionary = make_dict(roads, n)
    # print(dictionary)
    answer = []
    for s in sources:
        dist = find_road(dictionary, s, destination, 0)
        answer.append(dist)

    return answer