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
            int T = int.Parse(Console.ReadLine());
            for (int i = 0; i < T; i++)
            {
                int k = int.Parse(Console.ReadLine());
                int n = int.Parse(Console.ReadLine());
                int result = GetNumberOfPeople(k, n);
                Console.WriteLine(result);
                
            }
        }

        static int GetNumberOfPeople(int x, int y) // x층 y호
        {
            if (y == 1)
            {
                return 1;
            }
            else if (x == 0)
            {
                return y;
            }
            else
            {
                return (GetNumberOfPeople(x - 1, y) + GetNumberOfPeople(x, y - 1));
            }
            
        }
    }
}
