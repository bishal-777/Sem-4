import math
def f(x):
    return 4 * math.sin(x) - math.e**x

def g(x): 
    return 4 * math.cos(x) - math.e**x 

x0 = float(input("Enter initial guess value: "))
e = float(input("Enter tolerance error: "))
n = int(input("Enter the number of steps: "))

print("\nStep\t| x0\t\t| x1\t\t| f(x1)")

step = 1
while step <= n:
    dfx = g(x0)
    if abs(dfx) < e:
        print("Derivative too small. Method may not converge.")
        break

    x1 = x0 - f(x0) / dfx
    f1 = f(x1)

    print(f"{step}\t| {x0:.6f}\t| {x1:.6f}\t| {f1:.6f}")

    if abs(f1) < e:
        print(f"\nConverged! The value of the root is: {x1:.6f}")
        break

    x0 = x1
    step += 1

if step > n:
    print(f"\nNot converged within {n} steps. The approximate root is: {x1:.6f}")