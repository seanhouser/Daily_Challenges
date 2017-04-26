Module Module1

    Sub Main()
        Console.WriteLine("Please enter the values")
        Dim input = Console.ReadLine()
        Dim numbers As String() = input.Split(" ")
        'Console.WriteLine(Val(numbers(0)(0)))

        For Each number In numbers
            Dim largest = Val(number)
            Dim count As Integer = Factorial(number)
            For count = count To 0 Step -1
                Console.WriteLine(count)
            Next
        Next
    End Sub

    Public Function Factorial(number As String)
        Dim count As Integer = Val(number) - 1
        Dim result As Integer = Val(number)
        Do While count > 0
            result *= count
            count -= 1
        Loop
        Return result
    End Function

End Module
