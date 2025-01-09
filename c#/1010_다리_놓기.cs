// 1010_ 다리 놓기

// 10개 중에서 3개 뽑기 (조합), 뽑는 순서가 중요하지 않음, 중복 X -> 10C3 = 10*9*8 / 3*2*1
// 10개 중에서 3개를 뽑아 순서대로 나열하기 (순열) -> 10P3 = 10*9*8

int T, N, M;
T = int.Parse(Console.ReadLine());
for (int i = 0; i < T; i++)
{
    string[] input = Console.ReadLine().Split(" ");
    int temp = 1;
    int result = 1;
    N = int.Parse(input[0]);
    M = int.Parse(input[1]);
    for (int j = M; j > M - N; --j)
    {
        result *= j;
        result /= temp++;
    }
    Console.WriteLine(result);
}
