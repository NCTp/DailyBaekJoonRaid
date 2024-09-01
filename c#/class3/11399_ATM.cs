using System;
using System.Collections.Generic;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int result = 0;
            string[] times = Console.ReadLine().Split(" ");
            List<int> l_times = new List<int>();
            
            for (int i = 0; i < n; i++)
            {
                l_times.Add(int.Parse(times[i]));
            }
            
            l_times.Sort();
            
            for (int i = 0; i < l_times.Count; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    result += l_times[j];
                }
            }
            
            Console.WriteLine(result);
        }
    }
}
