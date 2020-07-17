s = "abcdefghijklmnopqrstuvwxyz"

a, b = input().split()

for i in range(0,int(b)):
    print(s[i], end="")

diff = int(a)-int(b)
j = 0

for i in range(0,diff,1):
    print(s[j], end="")
    j+=1

    if j == int(b):
        j=0
