n = int(input())

Anton, Danik = (0, 0)

r = input()

for i in range(0, n):
    if r[i] == 'A':
        Anton = Anton+1
    else:
        Danik = Danik+1


if Anton > Danik:
    print("Anton")
elif Anton < Danik:
    print("Danik")
else:
    print("Friendship")

