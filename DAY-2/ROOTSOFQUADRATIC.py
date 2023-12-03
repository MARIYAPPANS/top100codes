"Finding Roots of a quadratic equation"
"formula -b+or-(sqrt(b^2)-4ac)/2a"
import cmath
def quadratic_roots(a, b, c):
    delta = cmath.sqrt(b**2 - 4*a*c)
    root1 = (-b + delta) / (2*a)
    root2 = (-b - delta) / (2*a)
    return root1, root2
a = 1
b = -3
c = 2
roots = quadratic_roots(a, b, c)
print("Root 1:", roots[0])
print("Root 2:", roots[1])

