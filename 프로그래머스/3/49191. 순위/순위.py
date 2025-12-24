from collections import deque

def solution(n, results):
    answer = 0
    winner = [set() for _ in range(n+1)]
    looser = [set() for _ in range(n+1)]
    for a, b in results:
        winner[b].add(a)
        looser[a].add(b)

    w = [set() for _ in range(n+1)]
    l = [set() for _ in range(n+1)]
    for i in range(1, n+1):
        winners = deque(winner[i])
        visited = set()
        while winners:
            target = winners.popleft()
            if target not in visited:
                visited.add(target)
                w[i].add(target)
                winners.extend(winner[target])

        loosers = deque(looser[i])
        visited.clear()
        while loosers:
            target = loosers.popleft()
            if target not in visited:
                visited.add(target)
                l[i].add(target)
                loosers.extend(looser[target])

        if len(w[i]) + len(l[i]) == n-1:
            answer += 1

    return answer