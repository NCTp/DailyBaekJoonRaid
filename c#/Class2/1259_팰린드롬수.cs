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
            while (true)
            {
                string number = Console.ReadLine();
                string number2 = ReverseString(number);
              
                if(int.Parse(number) == 0) Environment.Exit(0); // 종료 조건
              
                number2.Reverse();
                bool isPalindrome = true;
              
                for (int i = 0; i < number.Length; i++)
                {
                    if (number[i] != number2[i]) isPalindrome = false;
                }
            
                if(isPalindrome) Console.WriteLine("yes");
                else Console.WriteLine("no");
            }
        }
      
        static string ReverseString(string input)
        {
            char[] charArray = input.ToCharArray();
            Array.Reverse(charArray);
            return new string(charArray);
        }
    }
}
