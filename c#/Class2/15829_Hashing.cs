using System;
using System.Linq;
using System.Net.Mime;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int L = int.Parse(Console.ReadLine());
            string str1 = Console.ReadLine();
            long M = 1234567891;
            long r = 1;
            long result = 0;
            
            for (int i = 0; i < str1.Length; i++)
            {
                result += ((int)str1[i] - 96) * r;
                result %= M;
                r *= 31;
                r %= M;
            }
            Console.WriteLine(result);

        }
    }
}
