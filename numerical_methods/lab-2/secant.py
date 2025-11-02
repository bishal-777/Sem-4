import math
def f(x):
    return 4 * math.sin(x) - math.e**x

x0 = float(input("Enter guess value 1: "))
x1 = float(input("Enter guess value 2: "))
e = float(input("Enter tolerance error: "))
n = int(input("Enter the number of steps: "))

while f(x0) * f(x1) >= 0:
    print("Incorrect guess! f(x0) and f(x1) must have opposite signs.")
    x0 = float(input("Enter the first guess: "))
    x1 = float(input("Enter the second guess: "))

print("\nStep\t| x0\t\t| x1\t\t| x2\t\t| f(x2)")

step = 1
while step <= n:
    if abs(f(x1) - f(x0)) < e:
        print("Division by near-zero detected. Method may not converge.")
        break

    x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0))
    f2 = f(x2)

    print(f"{step}\t| {x0:.6f}\t| {x1:.6f}\t| {x2:.6f}\t| {f2:.6f}")

    if abs(f2) < e:
        print(f"\nConverged! The value of the root is: {x2:.6f}")
        break

    if f(x0) * f2 < 0:
        x1 = x2
    else:
        x0 = x2

    step += 1

if step > n:
    print(f"\nNot converged within {n} steps. The approximate root is: {x2:.6f}")