import numpy as np

n = int(input("Enter the number of data points: "))
x = np.zeros(n)
y = np.zeros((n, n))

for i in range(n):
    x[i] = float(input(f"Enter x[{i}]: "))
    y[i][0] = float(input(f"Enter y[{i}]: "))

for j in range(1, n):
    for i in range(n - j):
        y[i][j] = (y[i+1][j-1] - y[i][j-1]) / (x[i+j] - x[i])

x1 = float(input("Enter x to interpolate: "))

result = y[0][0]
term = 1

print("\nTerm\t| Coefficient\t| Term Value")
for i in range(1, n):
    term *= (x1 - x[i-1])
    coeff = y[0][i]
    term_val = coeff * term
    print(f"{i}\t| {coeff:.6f}\t| {term_val:.6f}")
    result += term_val

print(f"\nInterpolated value at x = {x1} is y = {result:.6f}")
