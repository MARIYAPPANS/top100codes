a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = []
d = []
for i in range(2, a + 1):
        c.append(i*a)
for i in range(1, b + 1):
        d.append(i*b)
common_factors = set(c) & set(d)
lcm = min(common_factors)
print(lcm)
