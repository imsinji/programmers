from collections import deque

def get_children(n, computers, i):
    rtn = []
    for j in range(n):
        value = computers[i][j]
        if i != j and value != -1:
            if value == 1:
                rtn.append(j)
            computers[i][j] = -1
            computers[j][i] = -1
    computers[i][i] = -1
    return rtn

def solution(n, computers):
    answer = 1
    result = []
    children = deque()
    for i in range(n):
        temp = []
        if computers[i][i] == -1:
            continue
        children.append(i)
        while children:
            child = children.popleft()
            temp.append(child)
            rtn = get_children(n, computers, child)
            children.extend(rtn)
        if temp:
            result.append(temp)

    return len(result)