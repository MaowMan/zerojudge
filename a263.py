import datetime
import sys

def cal(day1,day2):
    d1=datetime.datetime(day1[0],day1[1],day1[2])
    d2=datetime.datetime(day2[0],day2[1],day2[2])
    return abs((d1-d2).days)

data=[]

for s in sys.stdin:
    data.append(tuple(map(int,s.split())))


for i in range(0,len(data),2):
    print(cal(data[i],data[i+1]))