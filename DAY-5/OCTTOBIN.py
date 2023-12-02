n = input("Enter an octal number: ")
decimal_number = int(n, 8)
binary_representation = bin(decimal_number)[2:]
print("Binary representation:", binary_representation)
