from collections import deque

def solution(n, roads, sources, destination):
    graph = [[] for _ in range(n + 1)]
    for a, b in roads:
        graph[a].append(b)
        graph[b].append(a)
    dist = [-1] * (n + 1)

    queue = deque([destination])
    dist[destination] = 0
    while queue:
        q = queue.popleft()
        for n in graph[q]:
            if dist[n] == -1:
                dist[n] = dist[q] + 1
                queue.append(n)
    answer = []
    for s in sources:
        answer.append(dist[s])
    return answer