# Convert two lists into a dictionary.
# Merge two Python dictionaries into one.
# Print the value of key 'history' from the below dict.
# Initialize dictionary with default values.
# Create a dictionary by extracting the keys from a given dictionary.

# Merge two Python dictionaries into one.
# dict1 = {'a': 1, 'b': 2}
# dict2 = {'x': 3, 'c': 4}
# dict1.update(dict2)  # Merges dict2 into dict1
# print(dict1)

# Convert two lists into a dictionary.
# k=[1,2,3,4,5]
# j=[4,6,8,9,7]
# f=dict(zip(k,j))
# print(f)


# Create a dictionary by extracting the keys from a given dictionary.
# dict={}
# n=int(input("enter the value of n:"))
# for _ in range(n):
#   x=input()
#   y=input()
#   dict[x]=x
#   dict[y]=y
# print(dict)

k=[1,2,3,4,5]
l=[6,7,8,9,5]
j=dict(zip(k,l))
print(j)
