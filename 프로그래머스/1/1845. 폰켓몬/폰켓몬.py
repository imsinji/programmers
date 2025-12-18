def solution(nums):
    s = set(nums)
    a = len(s)
    b = int(len(nums)/2)

    return min([a,b])