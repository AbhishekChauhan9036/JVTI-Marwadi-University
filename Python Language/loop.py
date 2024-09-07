# num = 10
# if num%2 == 0:
#     print("Even")
# else:
#     print("Odd")


# i = 1
# while i<=10:
#     if i%2!= 0:
#         print(i)
#     i+=1


# for i in range(1,10):
#     if(i == 7):
#         break
#     print(i)


# list = (12, 23, 23, 89, 80, 45)
# temp = 0
# target = 23
# for i in list:
#     if(i == target):
#         temp = 1
#         print("Yes It's Exist")
#         break

# if(temp==0):
#     print("Not Exist")



# s = "Abhishek"
# for i in s:
#     print(i)



# for i in range(3):
#     print(i, end=" ")



# n = int(input())
# fact = 1
# for i in range(1,n):
#     fact = fact+ fact * i
# print(fact)

# list = [12,13,7,2,4,2,7]
# sum = 0
# for i in list:
#     sum+=i

# print(sum)

sum =0
while(True):
    num = int(input())
    if(num<0):
        break
    sum+=num

print(sum)