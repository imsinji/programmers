from collections import deque

def similar(a, b):
    count = 0
    for i in range(len(a)):
        if a[i] == b[i]:
            count += 1
    return count >= len(a)-1

def find_similar(words, traced, current):
    rtn = []
    for i in range(len(words)):
        if not traced[i] and similar(current, words[i]):
            rtn.append(words[i])
            traced[i] = True
    return rtn

def solution(begin, target, words):
    answer = 0
    if target not in words:
        return 0
    traced = [False for _ in range(len(words))]
    targets_list = deque([[begin]])
    while targets_list:
        answer += 1
        temp = []
        similars = targets_list.popleft()
        # print(similars)
        for s in similars:
            temp.extend(find_similar(words, traced, s))
        if not temp:
            break
        if target in temp:
            # print("!!!!!!", temp)
            return answer
        targets_list.append(temp)

    return 0