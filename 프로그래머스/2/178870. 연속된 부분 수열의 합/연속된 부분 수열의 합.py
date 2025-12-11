def binary_search_manual(target_list, target_value, n):
    first = 0
    last = len(target_list) - 1 - n
    index = -1
    
    while first <= last:
        midpoint = (first + last) // 2 
        temp_value = target_list[midpoint+n] - target_list[midpoint]

        if temp_value == target_value:
            print('found')
            if index == -1 or index > midpoint:
                index = midpoint
                last = midpoint - 1 # 더 작은 인덱스에 데이터가 있는지 확인
        else:
            if target_value < temp_value:
                last = midpoint - 1
            else:
                first = midpoint + 1
    return index


def solution(sequence, k):
    answer = []
    
    sum_value = 0
    prefix_sum = [0]
    for i in sequence:
        sum_value += i
        prefix_sum.append(sum_value)

    for n in range(1, len(sequence)+1):
        idx = binary_search_manual(prefix_sum, k, n)
        if idx != -1:
            return [idx, idx+n-1]

    return answer