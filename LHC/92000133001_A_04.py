# Set A - Que 4
n = int(input("Enter Number: "))
a = []
count = 0


def binary(n):
    if n > 1:
        binary(n // 2)
    print(n % 2, end="")
    a.append(n % 2)


binary(n)
print(" is", n, "in binary", end="\n")
for i in range(len(a)):
    if a[i] == 1:
        count += 1

print("Number of 1s in Binary: ", count)
