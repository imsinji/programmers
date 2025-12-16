def solution(user_id, banned_id):
    result = set()
    visited = [False] * len(user_id)

    def candidate(user_id, banned_id):
        if len(user_id) != len(banned_id):
            return False
        for i in range(len(banned_id)):
            b = banned_id[i]
            u = user_id[i]
            if b != '*' and b != u:
                return False
        return True

    def check_candidate(pos):
        if pos == len(banned_id):
            temp = ''
            for i in range(len(visited)):
                if visited[i]:
                    temp += '-'+user_id[i]
            result.add(temp)
            return
            
        for j in range(len(user_id)):
            if visited[j]:
                continue
            if candidate(user_id[j], banned_id[pos]):
                visited[j] = True
                check_candidate(pos+1)
                visited[j] = False
    
    check_candidate(0)
    return len(result)