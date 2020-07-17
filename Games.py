from collections import defaultdict

x = int(input())
mHome = defaultdict(int)
mAway = defaultdict(int)

for i in range(0, x):
    a, b = map(int, input().split())
    mHome[a] += 1
    mAway[b] += 1

sum : int = 0

for i in mAway:
    sum += mHome[i]*mAway[i]

print(sum)
