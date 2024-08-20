'''Assignment 1: Even or Odd Number   Task: Write a Python program that takes an integer 
input from the user and checks whether the number is even or odd using an if-else statement.'''
num = int(input("Enter an integer: "))
if num % 2 == 0:
    print(f"{num} is Even")
else:
    print(f"{num} is Odd")



'''Assignment 2: Simple Calculator  Task: Write a Python program that takes two numbers and 
an operator (+, -, *, /) as input. Perform the corresponding arithmetic operation and display the
 result using if-else conditions.'''
first_num = float(input("Enter first number: "))
second_num = float(input("Enter second number: "))
op = input("Enter operator (+, -, *, /): ")
if op == '+':
    calc_result = first_num + second_num
elif op == '-':
    calc_result = first_num - second_num
elif op == '*':
    calc_result = first_num * second_num
elif op == '/':
    calc_result = first_num / second_num
else:
    calc_result = "Invalid operator"

print(f"Result: {calc_result}")



'''Assignment 3: Check Leap Year   Task: Write a Python program that asks the user to input a year.
 Check if the year is a leap year using if-else and print an appropriate message.'''
input_year = int(input("Enter a year: "))
if (input_year % 4 == 0 and input_year % 100 != 0) or (input_year % 400 == 0):
    print(f"{input_year} is a Leap Year")
else:
    print(f"{input_year} is not a Leap Year")



'''Assignment 4: Vowel or Consonant   Task: Write a Python program to check whether a given 
character is a vowel or a consonant using if-else statements. Consider both uppercase and lowercase inputs.'''
char_input = input("Enter a character: ").lower()
if char_input in 'aeiou':
    print(f"{char_input} is a Vowel")
else:
    print(f"{char_input} is a Consonant")



'''Assignment 5: Grade Calculator  Task: Write a Python program that takes marks of five subjects as
 input and calculates the average. Then, assign a grade based on the average using if-else 
 statements (e.g., A for 90+, B for 80-89, etc.).'''
subject_marks = []
for i in range(5):
    subject_marks.append(float(input(f"Enter marks for subject {i+1}: ")))
avg_marks = sum(subject_marks) / 5
if avg_marks >= 90:
    grade = 'A'
elif avg_marks >= 80:
    grade = 'B'
elif avg_marks >= 70:
    grade = 'C'
elif avg_marks >= 60:
    grade = 'D'
else:
    grade = 'F'

print(f"Your average is {avg_marks} and your grade is {grade}")



'''Assignment 6: Maximum of Three Numbers Task: Write a Python program to find the maximum
 of three numbers using if-else conditions.'''
first_value = float(input("Enter first number: "))
second_value = float(input("Enter second number: "))
third_value = float(input("Enter third number: "))
if first_value >= second_value and first_value >= third_value:
    max_value = first_value
elif second_value >= first_value and second_value >= third_value:
    max_value = second_value
else:
    max_value = third_value

print(f"The maximum number is {max_value}")



'''Assignment 7: Check Data Type Task: Write a Python program that accepts any input from the
 user and checks the data type of the input using if-else. Print whether it's an integer, float, string, or something else.'''
user_input = input("Enter something: ")
if user_input.isdigit():
    print("It's an integer.")
elif user_input.replace('.', '', 1).isdigit() and user_input.count('.') < 2:
    print("It's a float.")
elif isinstance(user_input, str):
    print("It's a string.")
else:
    print("It's something else.")



'''Assignment 8: Positive, Negative, or Zero   Task: Write a Python program that asks the user to input a
 number and checks if the number is positive, negative, or zero using if-else conditions.'''
user_number = float(input("Enter a number: "))
if user_number > 0:
    print(f"{user_number} is Positive")
elif user_number < 0:
    print(f"{user_number} is Negative")
else:
    print(f"{user_number} is Zero")



'''Assignment 9: Check Divisibility Task: Write a Python program that takes an integer input and checks
 if it is divisible by 5 and 11 using if-else. Print appropriate messages based on the result.'''
div_number = int(input("Enter an integer: "))
if div_number % 5 == 0 and div_number % 11 == 0:
    print(f"{div_number} is divisible by both 5 and 11")
else:
    print(f"{div_number} is not divisible by both 5 and 11")


'''Assignment 10: Simple Login System Task: Write a Python program that simulates a simple login 
system. The program should ask for a username and password. Use if-else to check if the
 credentials match a predefined username and password and print a welcome message if 
 they do. Otherwise, print an error message.'''
correct_username = "user123"
correct_password = "pass123"
entered_username = input("Enter username: ")
entered_password = input("Enter password: ")
if entered_username == correct_username and entered_password == correct_password:
    print("Welcome! You have successfully logged in.")
else:
    print("Error: Invalid username or password.")
