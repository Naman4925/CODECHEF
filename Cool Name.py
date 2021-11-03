t=int(input())
for i in range(t):
    x=input()
    sort_char= sorted(x)
    x = "".join(sort_char)
    a=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    m=0
    for j in range(len(x)):
        for k in range(len(a)):
            if x[j]==a[k]:
                m=m+(j+1)*(k+1)
    print(m)
