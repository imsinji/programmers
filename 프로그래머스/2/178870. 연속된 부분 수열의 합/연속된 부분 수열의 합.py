def solution(sequence, k):
    num = len(sequence)
    si, ei, s = 0, 0, 0
    csi, cei = num, 0
    for i in range(num):
        ei = i
        s += sequence[i]
        while s > k:
            s -= sequence[si]
            si += 1
            if si == ei:
                break
        if s == k and (csi > si or (cei - csi ) > (ei - si)):
            csi, cei = si, ei
    return [csi, cei]