using System;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder result = new StringBuilder();
            int[,] fib = new int[42,2];
            fib[0,0] = 1;
            fib[0,1] = 0;
            fib[1,0] = 0;
            fib[1, 1] = 1;
            for (int i = 2; i < 42; i++)
            {
                fib[i,0] = fib[i - 1, 0] + fib[i - 2, 0];
                fib[i,1] = fib[i - 1, 1] + fib[i - 2, 1];
            }
            
            int n = int.Parse(Console.ReadLine());
            
            for (int i = 0; i < n; i++)
            {
                int m = int.Parse(Console.ReadLine());

                result.AppendLine(fib[m,0] + " " + fib[m, 1]);

            }

            Console.WriteLine(result.ToString());
        }
        
    }
}
