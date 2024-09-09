using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

int n = int.Parse(Console.ReadLine() ?? string.Empty);
StringBuilder sb = new StringBuilder();
for (int i = 0; i < n; i++)
{
    SortedList<string, int> clothes = new SortedList<string, int>();
    int input = int.Parse(Console.ReadLine() ?? string.Empty);
    int result = 1;
  
    for (int j = 0; j < input; j++)
    {
        string[] cloth = Console.ReadLine().Split(" ");
        if(clothes.ContainsKey(cloth[1])) clothes[cloth[1]] += 1;
        else clothes.Add(cloth[1], 1);
    }
  
    // 모든 요소 출력
    foreach (KeyValuePair<string, int> entry in clothes)
    {
        result *= entry.Value + 1;
        //Console.WriteLine("Key: {0}, Value: {1}", entry.Key, entry.Value);
    }

    sb.Append(result -1 + "\n");
}

Console.WriteLine(sb.ToString());
