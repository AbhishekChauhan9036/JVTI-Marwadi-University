for i in range(1,5):
    k=1
    for j in range(1,10):
        if j>=5-i and j<=3+i:
            print(k,end='')
            if(j>=4):
                k-=1
            else:
                k+=1
        else:
            print(" ",end='')
    print()