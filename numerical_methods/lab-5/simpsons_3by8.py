def f(x):
    f = 1+x**3
    return f

def simpsons_1by3(a,b,n):
    if n%3 != 0:
        ans = "Enter multiple of 3 no. of sub intervals"
        return ans

    h = (b-a)/n
    I = f(a) + f(b)

    for i in range(1, n):
        x = a + i * h
        if i%3 == 0:

            I += 2*f(x)
        else:
            I += 3*f(x)

    I *= (3*h)/8

    return I



a, b = map(int, input("Enter lower and upper limit: ").split())
n = int(input("Enter the multiple of 3 no. of sub intervals: "))
print("Ans = ",simpsons_1by3(a,b,n))
