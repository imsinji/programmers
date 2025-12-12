def hanoi(n, a, b, c, moves):
    if n == 1:
        moves.append([a,c])
    else:
        hanoi(n-1, a, c, b, moves)
        moves.append([a, c])
        hanoi(n-1, b, a, c, moves)
    return moves

def solution(n):
    moves = []
    hanoi(n, 1, 2, 3, moves)
    return moves