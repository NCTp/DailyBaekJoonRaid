using System;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            StringBuilder nums = new StringBuilder(); // WriteLine 이 수행 시간이 매우 기므로,
            // StringBuilder 를 사용해 WriteLine을 호출하는 횟수를 최소화해야 한다.
            for (int i = 1; i <= n; i++)
            {
                nums.AppendLine(i.ToString());
            }

            Console.WriteLine(nums);

        }
    }
}
