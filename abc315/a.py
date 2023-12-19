s = input()
a = ['a', 'i', 'u', 'e', 'o']
for i in s:
    if not i in a:
        print(i, end="")
print()