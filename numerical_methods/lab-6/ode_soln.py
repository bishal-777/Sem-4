import numpy as np

def f(x,y):
    f = 1 + 3*x**2
    return f

def eulers(x,y,xp,h):
    n = int((xp -x)/h)

    for i in range (n):
        y += h*f(x,y)
        x += h
    
    print(f"(x,y) = ({x},{y})")

def rk_2(x,y,xp,h):
    n = int((xp -x)/h)

    for i in range (n):
        m1 = f(x,y)
        m2 = f(x+h,y+h*m1)
        y += (h/2)*(m1+m2)
        x += h
    
    print(f"(x,y) = ({x},{y})")


def rk_4(x,y,xp,h):
    n = int((xp -x)/h)

    for i in range (n):
        m1 = f(x,y)
        m2 = f(x+h/2,y+(h/2)*m1)
        m3 = f(x+h/2,y+(h/2)*m2)
        m4 = f(x+h,y+h*m3)

        y += (m1+m2+m3+m4)*(h/6)
        x += h
    
    print(f"(x,y) = ({x},{y})")

x, y, xp = map(float, input("Enter initial values of x, y and xp: ").split())
h = float(input("Enter the step size: "))


print("\n\nEulers method")
eulers(x,y,xp,h)

print("\n\nRK-2 method")

rk_2(x,y,xp,h)

print("\n\nRK-4 method")

rk_4(x,y,xp,h)