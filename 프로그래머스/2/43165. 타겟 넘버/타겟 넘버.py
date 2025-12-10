def solution(numbers, target):
    target_list = [0]
    for n in numbers:
        temp_list = []
        for t in target_list:
            temp_list.append(t + n)
            temp_list.append(t - n)
        target_list = temp_list.copy()
    answer = target_list.count(target)
    return answer