using System;
using System.Net.Mime;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                String[] length = Console.ReadLine().Split();
                int length_A = int.Parse(length[0]);
                int length_B = int.Parse(length[1]);
                int length_C = int.Parse(length[2]);
                // 정렬
                if (length_A >= length_B)
                {
                    int temp = length_B;
                    length_B = length_A;
                    length_A = temp;
                }
                if (length_B >= length_C)
                {
                    int temp = length_C;
                    length_C = length_B;
                    length_B = temp;
                }

                if (length_A == 0 && length_B == 0 && length_C == 0) // 프로그램 종료 조건
                {
                    Environment.Exit(0);
                }
                else
                {
                    if ((length_A * length_A) 
                        + (length_B * length_B) 
                        == (length_C * length_C))
                        Console.WriteLine("right");
                    else
                        Console.WriteLine("wrong");
                }
            }
        }
    }
}
