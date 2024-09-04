using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace BackJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            // 첫 줄에 입력된 난이도 의견의 개수를 받음
            int n = int.Parse(Console.ReadLine());

            // 의견이 0개라면 난이도는 0
            if (n == 0)
            {
                Console.WriteLine(0);
                return;
            }

            // 난이도 의견을 배열로 받음
            int[] opinions = new int[n];
            for (int i = 0; i < n; i++)
            {
                opinions[i] = int.Parse(Console.ReadLine());
            }

            // 난이도 의견을 오름차순으로 정렬
            Array.Sort(opinions);

            // 절사할 개수 계산 (15%)
            int cut = (int)Math.Round(n * 0.15);

            // 절사된 의견만 남김
            var trimmedOpinions = opinions.Skip(cut).Take(n - 2 * cut);

            // 평균 계산
            double average = trimmedOpinions.Average();

            // 평균을 반올림하여 최종 난이도 출력
            Console.WriteLine(Math.Round(average));
        }
        
    }
}
