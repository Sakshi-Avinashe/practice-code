l = []
n = int(input())
for i in range(n):
  a = int(input())
  l.append(a)
for i in range(n - 1):
  for j in range(n - i - 1):
    if (l[j]) > l[j + 1]:
      temp = l[j]
      l[j] = l[j + 1]
      l[j + 1] = temp

for i in range(n):
  print(l[i])

