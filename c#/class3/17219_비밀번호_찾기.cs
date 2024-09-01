using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.InteropServices.ComTypes;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] NM = Console.ReadLine().Split();
            StringBuilder result = new StringBuilder();;
            int n = int.Parse(NM[0]);
            int m = int.Parse(NM[1]);
            SortedList<string, string> s_List = new SortedList<string, string>();

            for (int i = 0; i < n; i++)
            {
                string[] str = Console.ReadLine().Split(" ");
                s_List.Add(str[0], str[1]);
            }

            for (int i = 0; i < m; i++)
            {
                string str = Console.ReadLine();
                string temp;
                s_List.TryGetValue(str, out temp);
                result.AppendLine(temp);
            }

            Console.WriteLine(result.ToString());
        }
    }
}
