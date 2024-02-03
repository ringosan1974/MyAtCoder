h, w, n = [int(i) for i in input().split(" ")];

field = [[False for j in range(w)] for i in range(h)]

d = [[0, -1], [1, 0], [0, 1], [-1, 0]]
x = y = nowd = 0
for i in range(n):
    if not field[y][x]:
        nowd = (nowd + 1) % 4
    else:
        nowd = (nowd - 1) % 4
    field[y][x] = not field[y][x]
    x = (x + d[nowd][0]) % w
    y = (y + d[nowd][1]) % h

for i in range(h):
    for j in range(w):
        if (field[i][j] == True):
            print("#", end="")
        else:
            print(".", end="")
    print("")