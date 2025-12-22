from collections import deque

# 현재 위치에 선이 지나가는 사각형 조회
def target_rects(rectangle, x, y):
    rtn = []
    for i in range(len(rectangle)):
        x1, y1, x2, y2 = rectangle[i]
        if ((x == x1 or x == x2) and y1 <= y <= y2) or (x1 <= x <= x2 and (y == y1 or y == y2)):
            rtn.append(i)
    return rtn

# 현재 위치에서 이동할 수 있는 위치인지 확인한 후 경로가 되는 사각형 반환
def on_line(rectangle, x, y, rs):
    check = False
    for r in rs:
        x1, y1, x2, y2 = rectangle[r]
        if ((x == x1 or x == x2) and y1 <= y <= y2) or (x1 <= x <= x2 and (y == y1 or y == y2)):
            check = True
            break
    if not check:
        return []
    return target_rects(rectangle, x, y)

# 사각형 안쪽으로 이동하는지 검사
def move_inner(rectangle, f_x, f_y, t_x, t_y):
    for x1, y1, x2, y2 in rectangle:
        if x1 == f_x and x1 < t_x and y1 < f_y < y2:
            return True
        if x2 == f_x and x2 > t_x and y1 < f_y < y2:
            return True
        if y1 == f_y and y1 < t_y and x1 < f_x < x2:
            return True
        if y2 == f_y and y2 > t_y and x1 < f_x < x2:
            return True
    return False

def solution(rectangle, characterX, characterY, itemX, itemY):
    answer = 0
    targets_list = deque([[(characterX, characterY, target_rects(rectangle, characterX, characterY))]])
    visited = set([(characterX, characterY)])
    candidate = [(1,0), (0,1), (-1,0), (0,-1)]
    while targets_list:
        answer += 1
        targets = targets_list.popleft()
        temp = []
        for x, y, rs in targets:
            for m_x, m_y in candidate:
                n_x = x + m_x
                n_y = y + m_y
                n_r = on_line(rectangle, n_x, n_y, rs)
                if (n_x, n_y) not in visited and n_r and not move_inner(rectangle, x, y, n_x, n_y):
                    visited.add((n_x, n_y))
                    temp.append((n_x, n_y, n_r))
            
        if temp:
            # print("temp:", answer, temp)
            targets_list.append(temp)
            for t_x, t_y, rs in temp:
                if t_x == itemX and t_y == itemY:
                    return answer
                    
    return 0