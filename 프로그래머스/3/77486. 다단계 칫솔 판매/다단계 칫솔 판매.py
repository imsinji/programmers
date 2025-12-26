def solution(enroll, referral, seller, amount):
    parent = {}
    for i in range(len(enroll)):
        parent[enroll[i]] = referral[i]
    
    profit = {name: 0 for name in enroll}

    for i in range(len(seller)):
        current = seller[i]
        money = amount[i]*100

        while current != "-" and money > 0:
            commitssion = money//10
            profit[current] += money - commitssion
            current = parent.get(current, "-")
            money = commitssion

    return [profit[name] for name in enroll]