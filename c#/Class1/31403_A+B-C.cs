using System;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            String sA = Console.ReadLine();
            String sB = Console.ReadLine();
            String sC = Console.ReadLine();
            int iA = int.Parse(sA);
            int iB = int.Parse(sB);
            int iC = int.Parse(sC);

            Console.WriteLine(iA + iB - iC);
            Console.WriteLine(int.Parse(sA+sB) - iC);


        }
    }
}
