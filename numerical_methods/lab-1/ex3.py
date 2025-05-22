def operation(a,b,c):
    if c =='+':
        ans=a+b        

    elif c == '-':
        ans=a-b

    elif c == '*':
        ans=a*b

    elif c == '/':
        if b==0:
            ans='invalid'
        else:
            ans = a/b

    else:
        ans = 'invalid'

    return(ans)
    

a, b = map(int,input("Enter any two numbers:").split())
c=input("Enter the operation you want to do(=,-,*,/):")
d=operation(a,b,c)
print(f"{a}{c}{b}={d}")