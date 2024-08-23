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
            string[] AB = Console.ReadLine().Split();
            int A = int.Parse(AB[0]);
            int B = int.Parse(AB[1]);

            int gcd = GCD(A, B);
            int lcm = (A * B) / gcd;
            
            Console.WriteLine(gcd);
            Console.WriteLine(lcm);

            int GCD(int a, int b)
            {
                while (b != 0)
                {
                    int temp = b; // 유클리드 호제법을 사용하여 구하기
                    int r = a % b;
                    b = r;
                    a = temp;

                }

                return a;
            }

        }
    }
}
