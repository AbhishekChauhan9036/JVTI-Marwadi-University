from numpy import random

x = random.randint(100)
x =   x if x%2==0 else 0
print(x)