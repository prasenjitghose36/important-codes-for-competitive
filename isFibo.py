# determine if given no is an element of the Fibonacci sequence.
from math import *
n=int(input())
if(n==0):
    print ("IsFibo")
else:
    r1 = sqrt(5*n**2+4)
    r2 = sqrt(5*n**2-4)
    isSquare = r1%1 == 0 or r2%1==0
    if(isSquare):
        print ("IsFibo")
    else:
        print ("IsNotFibo")