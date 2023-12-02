x, y = map(int, input("Insert the value for variables X and Y: ").split())

if x > 0 and y > 0:
    print(f"Point ({x}, {y}) lies in the First quadrant")
elif x < 0 and y > 0:
    print(f"Point ({x}, {y}) lies in the Second quadrant")
elif x < 0 and y < 0: 
    print(f"Point ({x}, {y}) lies in the Third quadrant")
elif x > 0 and y < 0:
    print(f"Point ({x}, {y}) lies in the Fourth quadrant")
elif x == 0 and y == 0:
    print(f"Point ({x}, {y}) lies at the origin")
elif x != 0 and y == 0:
    print(f"Point ({x}, {y}) lies on the x-axis")
elif x == 0 and y != 0:
    print(f"Point ({x}, {y}) lies on the y-axis")
