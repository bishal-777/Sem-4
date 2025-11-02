import numpy as np

n = int(input("Enter the number of equations: "))

a = np.zeros((n, n+1))
print("Enter the augmented matrix coefficients row-wise:")
for i in range(n):
    for j in range(n+1):
        a[i][j] = float(input(f"a[{i}][{j}] = "))

for i in range(n):
    if a[i][i] == 0.0:
        for k in range(i+1, n):
            if a[k][i] != 0:
                a[[i, k]] = a[[k, i]]
                break
        else:
            print("Matrix is singular or inconsistent.")
            exit()

    for j in range(i+1, n):
        ratio = a[j][i] / a[i][i]
        a[j] = a[j] - ratio * a[i]

x = np.zeros(n)
for i in range(n-1, -1, -1):
    x[i] = (a[i][n] - np.dot(a[i][i+1:n], x[i+1:n])) / a[i][i]

print("\nThe solution is:")
for i in range(n):
    print(f"x[{i}] = {x[i]:.6f}")

