a, b, q = map(int, input().split())
 
if q % 3 == 0:
    print(f'{a ^ b}')
elif q % 3 == 2:
    print(f'{b}')
else:
    print(f'{a}')
