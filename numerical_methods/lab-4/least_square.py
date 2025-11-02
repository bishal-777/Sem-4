import numpy as np

n = int(input("Enter the number of points: "))
x = np.zeros(n)
y = np.zeros(n)

sumx = 0
sumy = 0
sumxx = 0
sumxy = 0

for i in range(n):
    x[i] = float(input(f"x[{i}] = "))
    y[i] = float(input(f"y[{i}] = "))
    sumx += x[i]
    sumy += y[i]
    sumxx += x[i] * x[i]
    sumxy += x[i] * y[i]

b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx)
a = (sumy - b * sumx) / n

print(f"\nThe equation of best fit line is: y = {a:.4f} + {b:.4f}x")

