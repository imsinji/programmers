def solution(n):
    DIRECTIONS = [(1,0), (0,1), (-1,-1)]
    i, j, value, direction = -1, 0, 1, 0
    a = [[0] * n for _ in range(n)]
    total = n * (n + 1) // 2

    while value <= total:
        di, dj = DIRECTIONS[direction]
        ni = i + di
        nj = j + dj
        if ni < nj or not (0 <= ni < n and 0 <= nj < n) or a[ni][nj] != 0:
            direction = (direction + 1) % len(DIRECTIONS)
            continue

        a[ni][nj] = value
        i, j = ni, nj
        value += 1

    answer = [value for values in a for value in values if value != 0]
    return answer