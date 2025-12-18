def subsolution(array, command):
    s, e, k = command
    a = array[s-1:e]
    a.sort()
    return a[k-1]
    return 0

def solution(array, commands):
    answer = []
    for command in commands:
        answer.append(subsolution(array, command))
    return answer