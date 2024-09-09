using System.Text;

int n = int.Parse(Console.ReadLine());
Stack<int> stack = new Stack<int>();
StringBuilder sb = new StringBuilder();

for (int i = 0; i < n; i++)
{
    string[] input = Console.ReadLine().Split();
    
    switch (input[0])
    {
        case "1":
            stack.Push(int.Parse(input[1]));
            break;
        case "2":
            if (stack.Count == 0) sb.Append("-1" + "\n");
            else sb.Append(stack.Pop() + "\n");
            break;
        case "3":
            sb.Append(stack.Count + "\n");
            break;
        case "4":
            if (stack.Count == 0) sb.Append("1" + "\n");
            else sb.Append("0" + "\n");
            break;
        case "5":
            if (stack.Count == 0) sb.Append("-1" + "\n");
            else sb.Append(stack.Peek() + "\n");
            break;
        default:
            break;
    }

}
Console.WriteLine(sb.ToString());
