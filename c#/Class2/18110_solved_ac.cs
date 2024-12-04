using System;
using System.Diagnostics;
using System.Text;

/*
 * 여러번 틀리는 경우가 많았던 문제.
 * 틀렸던 이유는 바로 Math.Round() 메서드의 반올림이
 * 내가 생각하는 것처럼 동작하지 않았음.
 * 직접 반올림 기능을 구현해주어야 함.
 */

int MyRoundMethod(double value)
{
    if (value >= 0.5 + Math.Truncate(value))
    {
        return (int)Math.Ceiling(value);
    }
    else
    {
        return (int)Math.Truncate(value);
    }
}
int n = int.Parse(Console.ReadLine());
int[] opinions = new int[n];
if (n == 0)
{
    Console.WriteLine("0");
    return;
}
for (int i = 0; i < n; i++)
{
    opinions[i] = int.Parse(Console.ReadLine());
}

Array.Sort(opinions);

int cut = MyRoundMethod(n * 0.15);

var trimmedOpinions = opinions.Skip(cut).Take(n-2 * cut);

double average = trimmedOpinions.Average();

//Console.WriteLine(trimmedOpinions.Count());
average = MyRoundMethod(average);
Console.WriteLine(average);
