import heapq

def solution(n, works):
    heap = []
    for w in works:
        heapq.heappush(heap, [-w, w])
    for i in range(n):
        dummy, temp = heapq.heappop(heap)
        if temp == 0:
            return 0
        temp -= 1
        heapq.heappush(heap, [-temp, temp])
    answer = 0
    for remain in heap:
        answer += remain[1] ** 2
    return answer