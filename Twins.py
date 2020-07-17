x = int(input())
 
v = list(map(int,input().split()))
 
sum = sum(v)
 
v.sort(reverse=True)
sum2 = 0
count = 0
 
for i in range(0, x):
 
    if sum2<=sum:
 
        sum2+=v[i];
        count+=1;
        sum-=v[i];
 
    else:
        break
 
print(count)
