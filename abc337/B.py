s = input()
s2 = sorted(set(s), key=s.index)
if (s2 == "ABC"):
    print("Yes")
else:
    print("No")