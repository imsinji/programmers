from collections import deque

def solution(n, results):
    answer = 0
    winners = [set() for _ in range(n+1)]
    loosers = [set() for _ in range(n+1)]
    for a, b in results:
        winners[b].add(a)
        loosers[a].add(b)
    
    for i in range(1, n+1):
        for l in loosers[i]: # current에게 진 사람들
            winners[l].update(winners[i]) # current를 이긴 사람들을 추가
        for w in winners[i]:
            loosers[w].update(loosers[i])

    for i in range(1, n+1):
        if len(winners[i]) + len(loosers[i]) == n-1: answer += 1
    return answer