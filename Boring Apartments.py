from math import *
 
tc = int(input())
 
for t in range(tc):
 
    v = [0, 1, 3, 6, 10]
 
    a = input()
    b = int(a[0])
 
    if b == 1:
        print(f'{v[len(a)]}')
    else:
        print(f'{ ((b-1) * 10) + v[len(a)] }')
