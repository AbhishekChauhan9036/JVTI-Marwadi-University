class Currency: #class 
    def __init__(self,n,p):  #constructor
        self.name = n
        self.prize = p
    
    def printInfo(self):  # method/Function
        print("Name :",self.name)
        print("Prize :",self.prize)

b1 = Currency("BitCoin",880000.00) #instance or Object
b2 = Currency("Ethereum",279470.75)

b1.printInfo() # function Call
print()
b2.printInfo()