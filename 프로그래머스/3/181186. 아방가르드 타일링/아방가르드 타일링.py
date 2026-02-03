def dp(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    elif n == 2:
        return 3
    elif n%3 == 0:
        return 10 ** int(n/3)
    else:
        return dp(n-1) * 2 - 1
        # k = int(n/3)
        # r = n%3
        # if r == 1:
        #     return 2*dp(k*3)
        # elif r == 2:
        #     cal = 2*dp(k*3)
        #     cal *= dp(2)*dp(k*3)
        #     return cal
        # else:
        #     return dp(k*3)

def solution(n):
    return dp(n)%1000000007