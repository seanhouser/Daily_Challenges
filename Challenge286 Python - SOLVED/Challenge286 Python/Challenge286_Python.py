#Python 2.7
while 1:
    number = input("Press Ctrl+C to exit\nPlease enter the number you would like to find the reverse factorial of\n")

    def rev_factorial(number, factorial):
        if number == 1.0:
            factorial -= 1.0
            return factorial
        elif number < 1.0: 
            return -99.0
        else:
            number /= factorial
            factorial += 1 
            return rev_factorial(number, factorial)

    answer = rev_factorial(number, 2.0)
    if answer == -99.0:
        print "NONE"
    else:
        print "Factorial is " + "%g" % answer + "!\n"