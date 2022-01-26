import sys,os,io
import math 
from collections import defaultdict


def ii():
    return int(input())
def li():
    return list(map(int,input().split()))
# if(os.path.exists('input.txt')):
#     sys.stdin = open("input.txt","r") ; sys.stdout = open("output.txt","w") 
# else:
#     input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

def fun(prev,ptr):
    for i in range(21):
        if ptr&(1<<i):
            prev^=(1<<i)
    return prev

def solve():
    n = int(input())
    res = []
    prev = 0
    s = set([0])
    ptr = 1
    for i in range(n):
        while fun(prev,ptr) in s:
            ptr+=1
        prev = fun(prev,ptr)
        s.add(prev)
        res.append(ptr)
        ptr+=1

    print(*res)
t = 1
t = ii()
for _ in range(t):
    solve()
