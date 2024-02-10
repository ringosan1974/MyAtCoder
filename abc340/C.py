import sys
from functools import cache
sys.setrecursionlimit(10**7)

@cache
def solve(n):
    if (n >= 2):
        a = n // 2
        b = (n + 1) // 2
        return n + solve(a) + solve(b)
    else:
        return 0

N = int(input())
print(solve(N))