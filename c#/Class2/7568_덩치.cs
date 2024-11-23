using System;
using System.Diagnostics;
using System.Text;

int n = int.Parse(Console.ReadLine()); // 입력 받기.
int[] number = new int[50];
int[] weights = new int[50];
int[] heights = new int[50];    
for (int i = 0; i < n; i++)
{
    String tmp = Console.ReadLine();
    weights[i] = int.Parse(tmp.Split(' ')[1]);
    heights[i] = int.Parse(tmp.Split(' ')[0]); // 키와 몸무게 입력 받기.
}

for (int i = 0; i < n; i++) // 비교 후 등수 밀어내기
{
    for (int j = 0; j < n; j++)
    { 
        if (weights[i] < weights[j] && heights[i] < heights[j])
        {
            number[i]++;
        }
    }
}

for (int i = 0; i < n; i++)
{
    Console.Write(number[i]+1 + " "); // 0등부터 시작했으므로 1씩 더하기
}
