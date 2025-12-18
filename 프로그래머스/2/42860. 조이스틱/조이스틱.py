def solution(name):
    s = ord("A")
    e = ord("Z")
    sum = 0
    for c in name:
        from_a = ord(c) - s
        from_z = e - ord(c) + 1
        sum += min(from_a, from_z)

    temp_s = name[1:]
    l = len(temp_s)
    min_move = l
    for j in range(l):
        moved_s = temp_s[l-j:l] + temp_s[:l-j]
        mn, mr = 0, 0
        for i in range(l):
            if moved_s[i] != "A":
                mn = i+1
            if moved_s[l-1-i] != "A":
                mr = i+1
        ad_j = min(j, l-j)
        move = min(mn + ad_j, mr + ad_j)
        if min_move > move:
            min_move = move
    sum += min_move
    return sum