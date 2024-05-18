// See https://aka.ms/new-console-template for more information
using System.Diagnostics;

string sinput = Console.ReadLine();
int input = Convert.ToInt32(sinput);

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n-1) + fib(n-2));

    }
}

int fibonacci(int n)
{
    int count = 0;
    int[] f = new int[n+1];
    f[1] = 1;
    f[2] = 1;

    for(int i = 3; i <= n; i++)
    {
        count++;
        f[i] = f[i-1] + f[i-2];
    }
    return count;
}

Console.WriteLine(fib(input));
Console.WriteLine(fibonacci(input));
