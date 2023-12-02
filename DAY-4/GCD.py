a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = []
d = []
for i in range(1, a + 1):
    if a % i == 0:
        c.append(i)
for i in range(1, b + 1):
    if b % i == 0:
        d.append(i)
common_factors = set(c) & set(d)
gcd = max(common_factors)
print(gcd)
