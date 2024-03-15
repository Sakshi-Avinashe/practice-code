# def m(n):
#   if n==0:
#     return 0
#   else:
#     print(n)
#     m(n-1)
# m(10)

# Write a Python program to calculate the sum of a list of numbers.
# l=[]
# s=0
# n=int(input())
# for i in range(n):
#   a=int(input())
#   l.append(a)
#   s=s+a
# print(s)

# Write a Python program to calculate the sum of a list of numbers.
# def sum(l):
#   if(len(l)==0):
#     return 0
#   else:
#     return l[0]+sum(l[1:5])
# l=[1,2,3,4,5]
# k=sum(l)
# print(k)

# Write a Python program to get the factorial of a non-negative integer
# n=int(input())
# def fact(n):
#   if(n==0):
#     return 1
#   else:
#     return n*fact(n-1)
# print(fact(n))

# Write a Python program to solve the Fibonacci sequence using recursion.

n=int(input())
def fib(n):
  for i in range(n):
    if(i==0):
      return 0
    elif(i==1):
      return 1
    else:
      
