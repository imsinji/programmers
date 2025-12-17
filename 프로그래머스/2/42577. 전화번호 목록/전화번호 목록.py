def solution(phone_book):
    pn = set(phone_book)
    for p in pn:
        for i in range(1, len(p)):
            if p[0:i] in pn:
                return False
    return True