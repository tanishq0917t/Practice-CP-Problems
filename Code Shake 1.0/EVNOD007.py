for i in range(int(input())):
    n = int(input())
    l = set(map(int,input().split()))
    if len(l) == n: print("YES")
    else: print("NO")
