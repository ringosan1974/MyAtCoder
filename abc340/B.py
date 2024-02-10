q = int(input())
que = [[int(i) for i in input().split()] for i in range(q)]
a = list()
for i in que:
    if i[0] == 1:
        a.append(i[1])
    else:
        print(a[-i[1]])