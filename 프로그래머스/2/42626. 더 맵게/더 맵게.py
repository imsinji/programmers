import heapq

def solution(scoville, K):
    h = scoville
    heapq.heapify(h)
    answer = 0
    while h[0] < K:
        if len(h) <= 1:
            return -1
        a = heapq.heappop(h)
        b = heapq.heappop(h)
        temp = a + b * 2
        heapq.heappush(h, temp)
        answer += 1
    return answer