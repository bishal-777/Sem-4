def f(x):
    f = 1+x**3
    return f

def trapezodial(a,b,n):
    h = (b-a)/n

    I = f(a) + f(b)

    for i in range(1, n):
        x = a + i * h
        I += 2 * f(x)

    I *= (h / 2)

    return I



a, b = map(int, input("Enter lower and upper limit: ").split())
n = int(input("Enter the no. of sub intervals: "))
print("Ans = ",trapezodial(a,b,n))
