def f(x):
    f = 1+x**3
    return f

def simpsons_1by3(a,b,n):
    if n%2 != 0:
        ans = "Enter even no. of sub intervals"
        return ans

    h = (b-a)/n

    I = f(a) + f(b)

    for i in range(1, n):
        x = a + i * h
        if i%2 == 0:
            I += 2*f(x)
        else:
            I += 4*f(x)

    I *= (h / 3)

    return I



a, b = map(int, input("Enter lower and upper limit: ").split())
n = int(input("Enter the even no. of sub intervals: "))
print("Ans = ",simpsons_1by3(a,b,n))
