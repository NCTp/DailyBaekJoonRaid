using System;
using System.Text;

int input = int.Parse(Console.ReadLine());
int result = Fibonacci(input);
Console.WriteLine(result);

static int Fibonacci(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return Fibonacci(n - 1) + Fibonacci(n - 2);
    
}
