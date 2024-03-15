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



