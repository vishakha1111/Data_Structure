print("Input Array Elements:")       #not using set()
a=list(map(int,input().split()))
b=[]
for num in a:
    if num not in b:
        b.append(num)
for i in range(len(b)):
    print(b[i],end=" ")