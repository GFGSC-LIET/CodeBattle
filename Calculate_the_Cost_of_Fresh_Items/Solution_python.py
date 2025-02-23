t = int(input())

while t > 0:
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    sum=0
    for i in range(n):
        if a[i]>=x:
            sum+=b[i];
    print(sum)        
    t -= 1
