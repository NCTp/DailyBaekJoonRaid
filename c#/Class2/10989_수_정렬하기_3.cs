using System;
using System.Text;

int[] list = new int[10001];

StringBuilder sb = new StringBuilder();
using var sw = new System.IO.StreamWriter(Console.OpenStandardOutput());
using var sr = new System.IO.StreamReader(Console.OpenStandardInput());

int n = int.Parse(sr.ReadLine()); // n개의 수

for (int i = 0; i < n; i++)
{
    list[int.Parse(sr.ReadLine())]++; // Counting Sort
}

for (int i = 0; i <= 10000; i++)
{
    if (list[i] != 0)
    {
        for (int j = 0; j < list[i]; j++)
        {
            sw.WriteLine(i); // 해당 숫자가 등장한 횟수만큼 해당 숫자를 출력
        }
    }
}
