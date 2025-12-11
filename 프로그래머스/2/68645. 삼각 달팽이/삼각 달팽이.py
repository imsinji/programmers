def solution(n):
    DIRECTIONS = [(1,0), (0,1), (-1,-1)]
    i, j, value, direction = -1, 0, 1, 0
    a = [[0] * i for i in range(1, n+1)]
    total = n * (n + 1) // 2
    while value <= total:
        di, dj = DIRECTIONS[direction]
        ni = i + di
        nj = j + dj
        if ni < nj or not (0 <= ni < n and 0 <= nj <= ni) or a[ni][nj] != 0:
            direction = (direction + 1) % len(DIRECTIONS)
        else:
            a[ni][nj] = value
            i, j = ni, nj
            value += 1

    return sum(a, [])