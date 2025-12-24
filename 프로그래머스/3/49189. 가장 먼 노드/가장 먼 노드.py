def solution(n, edge):
    nodes = [set() for _ in range(n+1)]
    for a, b in edge:
        nodes[a].add(b)
        nodes[b].add(a)

    visited_nodes = [set([1])]
    visited = set([1])
    for i in range(n):
        temp = set()
        for c in visited_nodes[i]:
            for t in nodes[c]:
                if t not in visited:
                    temp.add(t)
                    visited.add(t)
        if temp:
            visited_nodes.append(temp)
        else:
            break
        
    return len(visited_nodes[-1])