def factorial(n):
    # return math.factorial(n)
    # I think they want us to work through recursion
    if n == 1:
        return n
    else:
        return n * factorial(n-1)

n  =  int(input())
# TODO: guarantee that input is 
print("%d" % factorial(n))
