a, b = map(int, input().split())
 
small = min(a, b)
big = max(a, b)
count = 0
 
for i in range(1, small+1):
    count = count + ((i + big)//5) - (i//5)
 
print(f"{count}")
