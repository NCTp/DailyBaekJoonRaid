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
            int N = int.Parse(Console.ReadLine());

            int x5 = 0;
            int x25 = 0;
            int x125 = 0;

            x5 = N / 5;
            x25 = N / 25;
            x125 = N / 125;


            Console.WriteLine(x5 + x25 + x125);

        }
    }
}
