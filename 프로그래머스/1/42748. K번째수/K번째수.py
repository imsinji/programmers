def subsolution(array, command):
    s, e, k = command
    return sorted(array[s-1:e])[k-1]

def solution(array, commands):
    return list(map(lambda x:subsolution(array, x), commands))