import sys
def combineation(a,b):
    res=1
    for i in range(b):
        res*=(a-i)
    for i in range(b):
        res//=(b-i)
    return res

for s in sys.stdin:
    a,b=tuple(map(int,s.split(" ")))
    print(combineation(a,b))



