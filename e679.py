import sys

for s in sys.stdin:
    a,b=tuple(map(int,s.split(" ")))
    if a==0 and b==0:
        break
    print(a**b)