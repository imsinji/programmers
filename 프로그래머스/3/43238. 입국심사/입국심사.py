def solution(n, times):
    s = 1
    e = max(times) * n + 1
    answer = 0

    while s <= e:
        mid = (s+e)//2
        total_count = sum([mid//t for t in times])
        if total_count >= n:
            answer = mid
            e = mid-1
        elif total_count < n:
            s = mid+1

    return answer
    