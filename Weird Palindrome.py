t=int(input())
for i in range(t):
    n=int(input())
    x=list(map(int,input().split()))
    c=0
    if n==1:
        m=0
        print(m)
    elif n>1:
        for i in range(n):
            if x[i]%2!=0:
                c=c+1
        m=c//2
        print(m)
