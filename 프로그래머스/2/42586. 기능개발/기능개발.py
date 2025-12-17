from collections import deque

def solution(progresses, speeds):
    p = deque(progresses)
    s = deque(speeds)
    answer = []
    while p:
        count = 0
        print(p)
        print(s)
        for i in range(len(p)):
            if p[i] < 100:
                p[i] += s[i]
        
        while p and p[0] >= 100:
            count += 1
            s.popleft()
            p.popleft()
        if count != 0:
            answer.append(count)

    return answer