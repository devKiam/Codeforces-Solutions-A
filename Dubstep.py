x = input()

n = x.split("WUB")

for i in range(0, len(n)):

    if n[i] != '':

        print(n[i], end="")

        if i < len(n)-1:

            print(" ", end="")


