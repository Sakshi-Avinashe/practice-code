# creating a list to take size in user input
# list=[1,2,3,4,5,6,7,8]
# m=int(input("enter the m:"))
# for i in range(8):
#     h=list[i]
#     if(m==list[i]):
#       print("exist")
#     else:
#     print("not exists")

# marks=[3,2,"aai",True]
# print(marks[len(marks)-2])

# if "sh" in "sakshi":
#   print("Yes")
# else:
#   print("no")

# if we want to print whole list
# using slicing
# marks=[3,2,4,1]
# print(marks[0:4])

# l=["a","b","c",6,4,3,2,1]
# for i in range(8):
#   print(l[i])
#   l.append(i)

# print list to n
# l=[]
# n=int(input())
# for i in range(n):
#   l.append(i)
#   print(l)

# Take an list from the user as input and reverse it before printing it to the user.
# l=[]
# n=int(input())
# for i in range(n):
#   l.append(i)
# while(n>0):
#   n=n-1
#   print(l[n])

# Take an array from the user as input and find duplicate elements in an array.
# l=[]
# m=[]
# n=int(input())
# for i in range(n):
#   a=int(input())
#   l.append(a)
# for k in range(n-1):
#   for j in range(k+1,n):
#     if(l[k]==l[j]):
#       if(l[k] in m):
#         pass
#       else:
#         m.append(l[k])
#     else:
#       pass

# print(m)

# Take two sorted arrays from the user as input and Merge them into a single sorted array
# l=[1,2,3,4,5]
# k=[6,7,8,9,10]
# u=sorted(l+k)
# print(u)

# Given an unsorted array of size N that contains only non-negative integers, find a contiguous subarray that adds to a given number S. In case of multiple subarrays, return the subarray which comes first on moving from left to right. Let us say the array is - 3, 6, 7, 5, 10. And the value of S = 12. The output should be - 7, 5
# l=[3,6,7,5,10]
# s=int(input())
# for i in range(len(l)):
#   for j in range(i+1, len(l)):
#     if(l[i]+l[j]==s):
#       print(l[i],l[j])
#     else:
#       pass

# Take two sorted arrays from the user as input and find the Union and Intersection of the arrays.
# l=[]
# k=[]
# union=[]
# inter=[]
# n=int(input())
# for i in range(n):
#   a=int(input("enter the value of a:"))
#   l.append(a)
# for i in range(n):
#   j=int(input("enter the value of j:"))
#   k.append(j)
# for i in l:
#   if i not in union:
#     union.append(i)
# for j in k:
#   if j not in union:
#     union.append(j)
# for i in l:
#   if i in k:
#     inter.append(i)
# print(union)
# print(inter)

# Learn these sorting algorithms and apply them to an unsorted array:
# Selection Sort
# Insertion Sort
# Bubble Sort

# addition of the items in list
# l = [1, 3, 4, 5, 6]
# s = 0
# for i in range(0, 5):
#   s=s+ l[i]
# print(s)

# l=[1,2,3,4,5]
# s=1
# for i in range(len(l)):
#   s*=l[i]
# print(s)

# 3. Write a Python program to get the largest number from a list.

# l = [1, 2, 7, 4, 5]
# print(max(l))

# 4. Write a Python program to get the smallest number from a list.
# l=[1,2,3,4,5]
# print(min(l))

# l=["sakshi","disha","aadi","aai"]
# print(l.count("sakshi"))

# 7. Write a Python program to remove duplicates from a list.

# l = [1, 2, 3, 1, 5, 3]
# i=0
# k=set(l)
# j=list(k)
# print(j)

# 8. Write a Python program to check if a list is empty or not.
# l = []
# if len(l)==0:
#   print("empty")
# else:
#   print("not empty")


# l=[1,2,3,4,5]
# print(l.copy())

# 11. Write a Python function that takes two lists and returns True if they have at least one common member.

# l=[1,2,3,4,5]
# k=[6,7,8,9,10]
# for i in range(len(l)):
#   for g in range(len(k)):
#     if(l[i]==k[g]):
#       print("true")
#       break
# print("no")


# 12. Write a Python program to print a specified list after removing the 0th, 4th and 5th elements.

# Expected Output : ['Green', 'White', 'Black']

# List : ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
# k=(list[1:3]+list[4:])
# print(k)

k=int(input())
a=set()
for i in range(k):
  a=int(input())
  k=k+a
print(a)