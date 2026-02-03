def solution(distance, rocks, n):
    rocks.extend([0,distance])
    rocks.sort()
    deleted = []
    answer = 0
    left = 1
    right = distance
    mid = (left + right) // 2
    while left <= right:
        deleted = []
        mid = (left + right) // 2
        length = 0
        for i in range(1, len(rocks)):
            length += rocks[i] - rocks[i-1]
            if length < mid:
                deleted.append(rocks[i])
            else:
                length = 0
        if len(deleted) <= n:
            answer = mid
            left = mid + 1
        else:
            right = mid - 1
    return answer