def Fibonacci(age):
    n1=0
    n2=1
    sum=0
    while (n2<age):
        sum=sum+n2
        b=n2
        n1=n1+n2
        n1=b
    print("sum=", sum)

def Prime(age):
    for i in range (2,age):
        if(age%i==0):
            print(age, "The number is not prime")
            break
    else:
            print(age, "The number is prime")

def Binary(age):
    reverse=[]
    if age>=1:
        reverse.append(age%2)
        age=(age // 2)
    binary=reverse[::-1]
    print(binary)

def Main():
    while 1:
        age=int(input("Enter your age"))
        if(Fibonacci(age)!=1):
            Prime(age)
            Binary(age)
Main()
