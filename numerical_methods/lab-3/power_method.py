import numpy as np

n = int(input("Enter the order of the square matrix: "))
A = np.zeros((n, n))
print("Enter the matrix elements row-wise:")
for i in range(n):
    for j in range(n):
        A[i][j] = float(input(f"A[{i}][{j}] = "))

x = np.ones(n)
e = float(input("Enter the tolerance error: "))
max_iter = int(input("Enter maximum number of iterations: "))

print("\nStep\tEigenvalue (lambda)\tEigenvector (x)")

for step in range(1, max_iter + 1):
    x_new = np.dot(A, x)

    lambda_ = max(abs(x_new))
    
    x_new = x_new / lambda_

    print(f"{step}\t{lambda_:.6f}\t\t\t{x_new}")

    if np.allclose(x, x_new, atol=e):
        break

    x = x_new

print(f"\nDominant eigenvalue: {lambda_:.6f}")
print(f"Corresponding eigenvector: {x_new}")
