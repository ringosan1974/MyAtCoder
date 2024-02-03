n = int(input())
a = [int(i) for i in input().split()]
ma = 0
s = 0
for i in a:
    s += i
    if (s < 0):
        ma = max(abs(s), ma)
s += ma
print(s)