n=int(input())
for i in range(n):
    m=int(input())
    numbers=list(map(int,input().split(" ")))
    del numbers[0]
    flag = True 
    for number in numbers:
        if m%number==0:
            continue
        else:
            flag=False
            break
    if flag:
        print("{} - Wonderful.".format(m))
    else:
        print("{} - Simple.".format(m))

