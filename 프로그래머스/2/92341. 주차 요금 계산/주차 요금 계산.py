import math

def get_minutes(time):
    h, m = time.split(':')
    return int(h) * 60 + int(m)

def get_last_time():
    return get_minutes("23:59")

def get_fee(fees, minutes):
    base_time, base_fee, unit_minutes, unit_fee = fees
    total_fee = base_fee
    if minutes <= base_time:
        return total_fee
    remain_minutes = minutes - base_time
    total_fee += math.ceil(remain_minutes / unit_minutes) * unit_fee
    return total_fee

def solution(fees, records):
    dictionary = dict()
    for r in records:
        time, car_num, in_out = r.split(' ')
        mul = 1 if in_out == 'IN' else -1
        cal = (get_last_time() - get_minutes(time)) * mul
        if car_num in dictionary:
            dictionary[car_num] += cal
        else:
            dictionary[car_num] = cal

    sorted_dict = dict(sorted(dictionary.items()))
    answer = []
    for v in sorted_dict.values():
        answer.append(get_fee(fees, v))
    return answer