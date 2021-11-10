t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    if y%2==0 and x==0 :
        print("YES")
        continue
    elif y%2!=0 and x==0 :
        print("No")
        continue
    if (x+y*2)%2==0:
        print("YES")
    else:
            print("NO")
