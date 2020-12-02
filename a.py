t=int(input())
cnt=0
while t>0:
    n=int(input())
    while n>0:
        n=n//10
        cnt=cnt+1
    print(cnt)
    cnt=0
    t=t-1
    
