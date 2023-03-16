#!/usr/bin/python3
def ispalindrome(n):
    return str(n) == str(n)[::-1]

mylist=[]
for first_num in range(100,1000):
    for second_num in range(100,1000):
        item = first_num*second_num
        if ispalindrome(item):
            mylist.append(item)
print(max(mylist))
