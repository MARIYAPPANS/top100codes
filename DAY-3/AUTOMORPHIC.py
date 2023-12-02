import math

a = int(input("Enter a number: "))
b = pow(a, 2)
c = str(a)
d = str(b)

if d.endswith(c):
    print("Automorphic")
else:
    print("Not Automorphic")
