import sys
def cal(n):
    res=1
    for i in range(n):
        res*=(n-i);
    return res


for s in sys.stdin:
    n=int(s)
    if n==0 :
        break
    else:
        print(cal(2*n)//(cal(n)*cal(n+1)))