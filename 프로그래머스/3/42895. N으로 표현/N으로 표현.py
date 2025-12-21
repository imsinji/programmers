def add(f, N):
    return f+N
def minus(f, N):
    return f-N
def multiply(f, N):
    return f*N
def divide(f, N):
    return int(f/N) if N != 0 else None
def duplicate(N, k):
    rtn = 0
    for i in range(k):
        rtn += N*(10**i)
    # print("!!!!", rtn)
    return rtn
def operate(f, N, k):
    rtn = []
    rtn.append(add(f,N))
    rtn.append(minus(f,N))
    rtn.append(minus(N,f))
    rtn.append(multiply(f,N))
    rtn.append(divide(f,N))
    if f != 0:
        rtn.append(divide(N,f))
    rtn.append(duplicate(N,k))
    return rtn
    
def solve(N, k):
    # print(N, k)
    if k < 2:
        return []

    if k == 2:
        # print(operate(N, N, k))
        return set(operate(N, N, k))
    else:
        v = solve(N, k-1)
        # v.append(duplicate(N, k-1))
        # print("!!!", v)
        rtn = []
        for target in v:
            rtn.extend(operate(target, N, k))
        # print(rtn)
        return set(rtn)

def solution(N, number):
    answer = 2
    while True:
        if answer > 8:
            return -1
        if number in solve(N, answer):
            return answer
        answer += 1
    return answer