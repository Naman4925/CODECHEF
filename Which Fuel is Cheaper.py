# cook your dish here
t=int(input())
for i in range(t):
    a,b,c,d,e=map(int,input().split())
    x=a+c*e 
    y=b+d*e
    if x<y:
        print("PETROL")
    elif x>y:
        print("DIESEL")
    elif x==y:
        print("SAME PRICE")
