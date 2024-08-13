using System;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] nums = Console.ReadLine().Split(" ");
            int sum = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                int sqr = int.Parse(nums[i]);
                sum += sqr * sqr;
            }
            Console.WriteLine(sum % 10);
        }
    }
}
