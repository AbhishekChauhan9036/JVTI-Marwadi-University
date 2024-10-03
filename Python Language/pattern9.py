for i in range(1, 5):
    k = 'A'
    for j in range(1, 8):
        if j <= 5 - i or j >= 3 + i:
            print(k, end="")
            k = chr(ord(k) + 1) if j < 4 else chr(ord(k) - 1)
        else:
            print(" ", end="")
            # k = chr(ord(k) - 1) if j == 4 else k
    print()
