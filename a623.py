def combineation(a,b):
    res=1
    for i in range(b):
        res*=(a-i)
    for i in range(b):
        res//=(b-i)
    return res

while True:
    a,b=tuple(map(int,input().split(" ")))
    print(combineation(a,b))


