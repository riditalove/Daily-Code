#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      HP
#
# Created:     04/11/2024
# Copyright:   (c) HP 2024
# Licence:     <your licence>
#-------------------------------------------------------------------------------

"""
f_name = "tony"
l_name = "stark"
age = 51
is_genious = True
print(f_name+" "+l_name)
print(age)
print(is_genious)


name = input("What is your superhero? ")
print("hello "+name)

old_age = input("Enter your old age? ")
new_age = int(old_age)+2
print(new_age)

first=input("enter the first numebr: ")
second=input("enter the second numebr: ")

sum = int(first)+int(second)
print(sum)

print("The sum is : " + str(sum))



name = "FABiha Afrose"
print(name.upper())
print(name.find("rose"))


name = "FABiha Afrose"
print(name.replace("FABiha Afrose","Ridita"))
print(name) ## it replaces , not changes
print('F' in name) ## checking wheather this charachter is in the name or not
print("ihaa" in name)



print(5//3)
print(5/2)
print(5%3)
print(5**2)


f_var = input("First variable you want to print? ")
operation = input("operation de ")
s_var = input("Second variable you want to print? ")

if operation == '+':
    print(int(f_var)+int(s_var))
elif operation == '-':
    print(int(f_var)-int(s_var))
elif operation == "*":
    print(int(f_var)*int(s_var))
elif operation == '/':
    print(int(f_var)/int(s_var))
elif operation == '**':
    print(int(f_var)**int(s_var))
else:
    print("Okay")
    print(range(5))

i = 1
while i <= 10:
    print(i * "*")
    i=i+1

for item in range(5):
    print(item)


marks = [23,34,45,5,6,"maths"]
print(marks)
print(marks[-2])#starting from backward

marks = [12,2,3,34]
marks.append(78)# added at the last
print(marks[1:3])
marks.insert(0,99) # inserted at the desried index
print(marks[-3:-1])

for score in marks:
    print(score)

print(len(marks))
print(12 in marks)

i=0
while i < len(marks):
    print(marks[i])
    i=i+1

students = ["ridita","simi","dua","naina"]

for name in students:
    if name == "simi":
        continue
    elif name == "naina":
        break
    else:
        print(name)

print(students)
students.clear()
print(students)



marks = (23,34,45,56,67,78,89)#tuples are inchangable
print(marks)
print(marks.count(78))
print(marks.index(89))
print(marks[4])
marks = {23,34,45,56,67,67,67,67} # set doesn't have the concept of indexing
print(marks)#set is unordered, as it doesn't have indexing
#sets are mutable, you can use add,remove function

for score in marks:
    print(score)

#key : value

marks = {"english": 90, "math": 99, "physics": 95}
print(marks["english"])
marks["ICT"] = 95
print(marks["ICT"])
print(marks)
marks["math"]=96
print(marks["math"])

from math import *

print(sqrt(5))

def print_sum(first,second=10):
    print(first+second)

print_sum(3,4)
print_sum(4)

#interview questions

print(-10//3)

print('"python uses \\n for newline"')

print("/\\/\\/\\/\\")



name = "riditaaaaa"
print(name[2:8:-2])

dicti = {"jay":89,"bidisha":87,"jay":90}
print(len(dicti))



a = [3,4,5]
b = [7,8,9]
c = [5,6,1]

print(a+b+c)

print(list(zip(a,b,c)))

name = "Mark Suva"

print(name.split(" "))
print(10.0//3)

def sum_it(num1,num2):
    return num1+num2

print(sum_it(45,56))



name = "Mark Suva"
print(name[:])

num = input("Input the number: ")
siz = len(num)
su=0

for i in num:
    su = su + ((int(i))**siz)

if su == int(num):
    print("OK")
else:
    print("NO")

num = input("Enter the value ")
p = len(num)
n = len(num)*(-1)

i=0
j=-1

su=0

while i<p and j>=n:
    if(num[i]!=num[j]):
        break
    else:
        print(num[i])
        print(num[j])
        su=su+1
    i=i+1
    j=j-1

if su==p:
    print("OK")
else:
    print("NOt")

x = 12
y = 15

x,y = y,x
print(x)
print(y)

"""





