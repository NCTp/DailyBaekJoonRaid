using System;
using System.Numerics;
using System.Linq;
using System.Net.Mime;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] str = Console.ReadLine().Split(' ');
            
            BigInteger n = BigInteger.Parse(str[0]);
            BigInteger m = BigInteger.Parse(str[1]);

            BigInteger result1 = n / m;
            BigInteger result2 = n % m;

            Console.WriteLine(result1);
            Console.WriteLine(result2);
        }

    }
}
