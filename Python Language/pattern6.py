for i in range(1,6):
    k=1
    for j in range(1,10):
        if j>=6-i and j<=4+i and k:
            print("*",end='')
            k=0
        else:
            print(" ",end='')
            k=1
    print()