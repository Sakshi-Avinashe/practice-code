l=[]
n=int(input())
for i in range(n):
  a=int(input())
  l.append(a)
for i in range(n-1):
  m=l[i]
  for j in range(i+1,n):
    if m>l[j]:
      m=l[j]
      g=j
  if l[g]<l[i]:    
    temp=l[g]
    l[g]=l[i]
    l[i]=temp

for i in range(n):
  print(l[i])



  
