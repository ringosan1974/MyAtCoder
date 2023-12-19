def getMaxCharNum(s, c):
    count = 0
    mx = 0
    s = s + "0"
    for i in s:
        if (i == c):
            count += 1
        else:
            mx = max(mx, count)
            count = 0
    s = s[:-1]
    return mx

n = int(input())
s = input()
ans = 0
for i in range(26):
    ans += getMaxCharNum(s, chr(ord('a')+i))
print(ans)
