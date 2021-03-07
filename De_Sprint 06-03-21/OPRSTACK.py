n,k = [int(x) for x in input().split()]
arr = [int(x) for x in input().split()]
if n == 1:
    if k%2 == 1:
        print(-1)
    else:
        print(arr[0])
elif k >= n:
    print(max(arr))
else:
    print(max(arr[k-2],arr[k]))
