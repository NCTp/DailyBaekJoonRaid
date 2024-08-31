using System;
using System.Text;

class Program
{
    // https://rebro.kr/63
    static void Main()
    {
        int S = 0;
        StringBuilder output = new StringBuilder();
        string input;
        
        while ((input = Console.ReadLine()) != null)
        {
            string[] command = input.Split();

            switch (command[0])
            {
                case "add":
                    int addNum = int.Parse(command[1]) - 1;
                    S |= (1 << addNum);
                    break;

                case "remove":
                    int removeNum = int.Parse(command[1]) - 1;
                    S &= ~(1 << removeNum);
                    break;

                case "check":
                    int checkNum = int.Parse(command[1]) - 1;
                    output.AppendLine((S & (1 << checkNum)) != 0 ? "1" : "0");
                    break;

                case "toggle":
                    int toggleNum = int.Parse(command[1]) - 1;
                    S ^= (1 << toggleNum);
                    break;

                case "all":
                    S = (1 << 20) - 1;
                    break;

                case "empty":
                    S = 0;
                    break;
            }
        }

        // 결과를 한 번에 출력
        Console.Write(output.ToString());
    }
}
