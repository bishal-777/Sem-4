import numpy as np

n = int(input("Enter the number of data points: "))
x = np.zeros(n)
y = np.zeros(n)

for i in range(n):
    x[i] = float(input(f"Enter x[{i}]: "))
    y[i] = float(input(f"Enter y[{i}]: "))

x1 = float(input("Enter x to interpolate: "))
result = 0

print("\nTerm\t| Li\t\t| Li * yi")
for i in range(n):
    terms = 1
    for j in range(n):
        if i != j:
            terms *= (x1 - x[j]) / (x[i] - x[j])
    term_val = y[i] * terms
    print(f"{i+1}\t| {terms:.6f}\t| {term_val:.6f}")
    result += term_val

print(f"\nInterpolated value at x = {x1} is y = {result:.6f}")