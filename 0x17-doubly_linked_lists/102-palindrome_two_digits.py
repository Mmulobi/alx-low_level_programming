#!/usr/bin/python3
def ispalindrome(n):
    return str(n) == str(n)[::-1]

mylist=[]
for first_num in range(10,100):
    for second_num in range(10,100):
        item = first_num*second_num
        if ispalindrome(item):
            mylist.append(item)
print(max(mylist))
