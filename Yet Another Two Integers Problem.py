from math import *

t = int(input())

for tc in range(t):

    a, b = map(int, input().split())

    c = abs(a-b)

    print(f'{ceil(c/10)}')
