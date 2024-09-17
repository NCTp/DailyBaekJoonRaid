using System;
using System.Text;


int n = int.Parse(Console.ReadLine()); // 계단의 수
int[] score = new int[n+2];
int[] dp = new int[n+2];

for (int i = 1; i <= n; i++)
{
    score[i] = int.Parse(Console.ReadLine());
}

for (int i = 1; i <= n; i++)
{
    if (i == 1)
    {
        dp[i] = score[1];
    }
    else if (i == 2)
    {
        dp[i] = score[1] + score[2];
    }
    else
    {
        dp[i] = Math.Max(dp[i-2] + score[i], dp[i -3] + score[i] + score[i-1]);
    }
}

Console.WriteLine(dp[n]);


