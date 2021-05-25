'''
Problem Statement:
Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits
Test Cases:
Input: 4567
Expected Output: 2
Input: 9834698765123
Expected Output: 1
'''
a=int(input())
p=str(a)
x=0
sum1=0
sum2=0
while x<len(p):
    if x%2==0:
        sum1+=int(p[x])
    else:
        sum2+=int(p[x])
    x+=1
print(abs(sum1-sum2))
