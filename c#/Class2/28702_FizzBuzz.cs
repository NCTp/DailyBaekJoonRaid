using System;


namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string i = Console.ReadLine();
            string j = Console.ReadLine();
            string k = Console.ReadLine();
            int temp = 0;
            int result = 0;
            
            bool isNum = int.TryParse(i, out temp);
            if (isNum)
            {
                result = temp + 3;
            }
            else
            {
                isNum = int.TryParse(j, out temp);
                if (isNum)
                {
                    result = temp + 2;
                }
                else
                {
                    isNum = int.TryParse(k, out temp);
                    if (isNum)
                    {
                        result = temp + 1;
                    }
                }
            }

            if (result % 3 == 0 && result % 5 == 0)
            {
                Console.WriteLine("FizzBuzz");
            }
            else if (result % 3 == 0 && result % 5 != 0)
            {
                Console.WriteLine("Fizz");
            }
            else if (result % 3 != 0 && result % 5 == 0)
            {
                Console.WriteLine("Buzz");
            }
            else
            {
                Console.WriteLine(result);
            }
        }

    }
}
