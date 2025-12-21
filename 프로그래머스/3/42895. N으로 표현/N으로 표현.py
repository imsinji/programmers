def duplicate(N, k):
    rtn = 0
    for i in range(k):
        rtn += N*(10**i)
    return rtn

def operate(a, b):
    rtn = set()
    rtn.add(a+b)
    rtn.add(a-b)
    rtn.add(b-a)
    rtn.add(a*b)
    if a != 0: rtn.add(b//a)
    if b != 0: rtn.add(a//b)
    return rtn

def solution(N, number):
    answer = 1
    dp = [set() if i == 0 else set([duplicate(N,i)]) for i in range(9)]
    while True:
        if answer > 8:
            return -1
        for i in range(answer):
            if number in dp[answer]:
                return answer
            for a in dp[i]:
                for b in dp[answer-i]:
                    temp = operate(a,b)
                    dp[answer].update(temp)
                    if number in temp:
                        return answer
        answer += 1
    return -1