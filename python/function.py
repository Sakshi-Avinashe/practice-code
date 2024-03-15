# Write a function that inputs a number and prints the multiplication table of that number. ...

# Write a program to print twin primes less than 1000. ...

# Write a program to find out the prime factors of a number. ...

# Write a program to implement these formulae of permutations and combinations

# def (x):
# fori in range(1,11):
# r=x*i
# print(f"{x}*{i},{r}")
# int(input("enter the number:"))
# x(n)


# def c(a,b):
#   print("add:",a+b)
#   print("sub:",a-b)
#   return(a+b)
# c(2,4)
# c(30,60)
# c(23,12)

# def greet():
#   return("Welcome Pranju")
# print(greet())

# def greet(name):
#   return("welcome" ,name)
# print(greet("sakshi"))


# def k(king):
#   print("hello",king)
# k("aai")


# def calculation(a,b):
#   mean = (a*b)%(a+b)
#   print(mean)
# def isgreater(a,b):
#   if(a>b):
#     print("first number is greater")
#   else:
#     print("second number is greater")

# calculation(2,5)


# def avg(a,b):
#   print("the average is",a+b/2)
# avg(2,2)



# def add(a,b):
#   print("the addition is",a+b)
# add(2,3)


# def mul(a,b):
#   print("the multiplication",a*b)
# mul(45,2)

# def add(a,b):
#   k=a+b
#   print (k)
# a=int(input())
# b=int(input())
# add(a,b)

# 1. Write a Python function to find the maximum of three numbers.
# def max(a,b,c):
#   if(a>b):
#     m1=a
#     m2=b
#   else:
#     m1=b
#     m2=a
#   if(m1>c):
#     if(m1>m2):
#       print(m1)
#     else:
#       print(m2)
#   else:
#     if(c>m2):
#       print(c)
#     else:
#       print(m2)
# a,b,c=map(int,input().split())
# max(a,b,c)


# def max(a,b,c):
#   if(a>b and a>c):
#     return a
#   elif(b>a and b>c):
#     return b
#   else:
#     return c
# a,b,c=map(int,input().split())
# print(max(a,b,c))
# max(a,b,c)



# Write a Python function to sum all the numbers in a list.
# def add(l):
#   k=0
#   for i in l:
#     k+=i
#   return k
# print(add((8,2,3,0,7)))


# 3. Write a Python function to multiply all the numbers in a list.
# Sample List : (8, 2, 3, -1, 7)
# Expected Output : -336
# def multiply(number):
#   k=1
#   for i in number:
#     k*=i
#   return k
# print(multiply((8,2,3,-1,7)))

# 4. Write a Python program to reverse a string.
# Sample String : "1234abcd"
# Expected Output : "dcba4321" 
# def reverse(s):
#   return s[::-1]
# print(reverse("1234abcd"))

# 5. Write a Python function to calculate the factorial of a number (a non-negative integer). The function accepts the number as an argument.
# def factorial(n):
#   if(n==0):
#     return(1)
#   else:
#     return(n*factorial(n-1))
# n=int(input())
# print(factorial(n))

# 6. Write a Python function to check whether a number falls within a given range.
# def check(n):
#   if(n>=10 and n<=20):
#     return 1
#   else:
#     return 0
# n=int(input())
# print(check(n))

# Write a Python function that accepts a string and counts the number of upper and lower case letters.
# Sample String : 'The quick Brow Fox'
# Expected Output :
# No. of Upper case characters : 3
# No. of Lower case Characters : 12



# 8. Write a Python function that takes a list and returns a new list with distinct elements from the first list.
# Sample List : [1,2,3,3,3,3,4,5]
# Unique List : [1, 2, 3, 4, 5]
# def unique(l):
#   k=[]
#   for i in l:
#     if i not in k:
#       k.append(i)
#   return k
# print(unique([1,2,3,4,3,2,4]))


# 10. Write a Python program to print the even numbers from a given list.
# Sample List : [1, 2, 3, 4, 5, 6, 7, 8, 9]
# Expected Result : [2, 4, 6, 8]
# def even(l):
#   k=[]
#   for i in l:
#     if(i%2==0):
#       k.append(i)
#   return k
# print(even([1,2,3,4,5,6,7,8,9]))

# 11. write a python program to print the odd number from a given 
# def odd(l):
#   k=[]
#   for i in l:
#     if(i%2!=0):
#       k.append(i)
#   return k
# print(odd([1,2,3,4,5,6,7,8,9]))

# 11. Write a Python function to check whether a number is "Perfect" or not.
# According to Wikipedia : In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum). Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).
# Example : The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6. Equivalently, the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6. The next perfect number is 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128.
# def perfect(n):
#   s=0
#   for i in range(1,n):
#     if(n%i==0):
#       s=s+i
#   return s==n
# n=int(input())
# print(perfect(n))

# 15. Write a Python program that accepts a hyphen-separated sequence of words as input and prints the words in a hyphen-separated sequence after sorting them alphabetically.
# Sample Items : green-red-yellow-black-white
# Expected Result : black-green-red-white-yellow

# def check(s):
#   s=s.sorted(s)
#   return s
# print(check(['green-red-yellow-black-white']))


