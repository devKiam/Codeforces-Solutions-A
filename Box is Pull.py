t = int(input())

for tc in range(t):

    x1, y1, x2, y2 = map(int, input().split())

    ans = abs(x1 - x2) + abs(y1 - y2)

    if x1 == x2 or y1 == y2:
        print(f'{ans}')
    else:
        print(f'{ans + +2}')
