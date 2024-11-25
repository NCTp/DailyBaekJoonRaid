using System;
using System.Diagnostics;
using System.Text;

String temp = Console.ReadLine();
int n = int.Parse(temp.Split(' ')[0]); // 갯수 입력 받기
int m = int.Parse(temp.Split(' ')[1]); // 총합 입력 받기

int[] nums = new int[100];
int sum = 0;
int diff = m + 1;

String temp2 = Console.ReadLine();
for (int i = 0; i < n; i++)
{
    nums[i] = int.Parse(temp2.Split(' ')[i]);
    //Console.WriteLine(nums[i]);
}

for (int i = 0; i < n - 2; i++)
{
    for (int j = i + 1; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (diff > Math.Abs(m - (nums[i] + nums[j] + nums[k])) && (nums[i] + nums[j] + nums[k]) <= m)
            {
                diff = Math.Abs(m - (nums[i] + nums[j] + nums[k]));
                sum = nums[i] + nums[j] + nums[k];
            }
        }
    }
}
Console.WriteLine(sum);
