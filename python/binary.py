# l=[]
# n=int(input("enter the value of n:"))
# for i in range(n):
#   a=int(input("enter the elements:"))
#   l.append(a)
# l.sort()
# low=0
# high=n-1
# x=int(input("enter the element yo want searched:"))
# while(low<=high):
#   mid=(low+high)//2
#   if(l[mid]==x):
#     print(" found in this index",mid)
#     break
#   elif(x>l[mid]):
#     low=mid+1
#   else:
#     high=mid-1
# else:
#   print("nothing")




l=[]
n=int(input())
for i in range(n):
  a=int(input())
  l.append(a)

low=0
high=n-1
x=int(input())
while(low<high):
  mid=(low+high)//2
  if(l[mid]==x):
    print(mid)
    break
  elif(x>l[mid]):
    low=mid+1
    
