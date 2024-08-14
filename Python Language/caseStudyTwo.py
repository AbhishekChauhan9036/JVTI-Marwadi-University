# Case Study & Assignment No 2: 

#  1) Greeting Program: Write a program that asks the user for their name and then greets them with a personalized message.

#  2) Age Calculator : Create a program that prompts the user to enter their birth year and calculates their age.

#  3) Simple Math Quiz: Ask the user to input two numbers and then display their sum.

#  4) Temperature Converter: Write a program that converts a temperature from Celsius to Fahrenheit based on user input.

#  5) Favorite Color: Ask the user for their favorite color and then print a message incorporating their favorite color.

#  6) Height Conversion: Create a program that asks the user for their height in meters and converts it to centimeters.
hightM = int(input("Enter your hight in meters: "))
hightCM = hightM*100
print("your hight in centimeters is:",hightCM)

#  7) Simple Interest Calculator: Prompt the user for the principal amount, rate of interest, and time period, and then calculate and display the simple interest.


#  8) Word Count : Write a program that asks the user to enter a sentence and counts the number of words in the sentence.
str = input("Enter a sentence: ")
words = str.split()
wordcount = len(words)
print("Number of words in the sentence:", wordcount)



#  9) Birthday Reminder: Ask the user for their birth date in the format (day/month) and print a reminder message.
birthdate = input("Please enter your birth date in the format (day/month): ")
print("Reminder: Your birthday is on", birthdate,"Don't forget to celebrate!")



#  10) Number Comparison: Create a program that prompts the user to enter two numbers and then determines and displays which number is larger.
num1 = int(input("Enter a Number: "))
num2 = int(input("Enter a Number: "))
if(num1>num2):
    print("Num1 is greater than Num2")
else:
    print("Num2 is greater than Num1")

