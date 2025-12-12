import heapq

def solution(n, works):
    heap = [-i for i in works]
    heapq.heapify(heap)
    print(heap)
    for i in range(n):
        temp = heapq.heappop(heap)
        if temp == 0:
            return 0
        temp += 1
        heapq.heappush(heap, temp)
    return sum([v**2 for v in heap])