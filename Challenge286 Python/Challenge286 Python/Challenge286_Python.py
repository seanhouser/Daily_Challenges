number = input("Please enter the number you would like to find the reverse factorial of\n")
factorial = 2
def rev_factorial(number, factorial):
    if number == 1:
        factorial = factorial - 1
        return factorial
    elif number < 1:
        return -99
    else:
        number = number/factorial
        factorial = factorial + 1 
        return rev_factorial(number, factorial)
answer = rev_factorial(number, 2)
if answer == -99:
    print "NONE"
else:
    print "Factorial is ", answer, "!\n"
