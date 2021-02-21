for i in range(int(input())):
    a=input()
    b=input()
    a1=(set(a))
    b1=(set(b))
    z=a1.symmetric_difference(b1)
    print(len(z))
