import sympy
n = int(input(""))
primes_list = list(sympy.primerange(2, n))
print(primes_list)
for j in primes_list:
    for i in primes_list:
        if i + j == n:
            print(j,i)
