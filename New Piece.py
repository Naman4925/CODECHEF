# cook your dish here
t=int(input())
for i in range(t):
    a,b,p,q=list(map(int,input().split()))
    if a==p and b==q:
        print("0")
    elif (a+b)%2==(p+q)%2:
        print("2")
    else:
        print("1")
