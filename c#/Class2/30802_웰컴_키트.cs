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
            string[] requests = Console.ReadLine().Split();
            string[] TP = Console.ReadLine().Split();
            int T = int.Parse(TP[0]);
            int P = int.Parse(TP[1]);

            int shirtsPack = 0;

            for (int i = 0; i < requests.Length; i++)
            {
                if (int.Parse(requests[i]) % T == 0)
                {
                    shirtsPack += int.Parse(requests[i]) / T;
                }
                else
                {
                    shirtsPack += (int.Parse(requests[i]) / T) + 1;
                }
            }

            Console.WriteLine(shirtsPack);
            Console.WriteLine(N / P + " " + N % P);

        }
    }
}
