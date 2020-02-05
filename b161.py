import sys
for s in sys.stdin:
    try:
        n=int(s)
        print((2**n-1)*2)
    except ValueError:
        pass