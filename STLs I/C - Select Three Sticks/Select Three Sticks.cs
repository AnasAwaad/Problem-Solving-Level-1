
namespace PS;

internal class Program
{
    static void Main(string[] args)
    {
        int t = 1;
        t = int.Parse(Console.ReadLine());
        while (t > 0)
        {
            solve();
            t--;
        }
    }

    private static void solve()
    {
        int n = int.Parse(Console.ReadLine());
        string[] numbers = Console.ReadLine().Split(' ');

        var list = new List<int>();
        var diff = new List<int>();

        foreach (var num in numbers)
        {
            list.Add(int.Parse(num));
        }

        list.Sort();

        for (int i = 1; i < n; i++)
        {
            diff.Add(list[i] - list[i - 1]);
        }

        var min = int.MaxValue;

        for (int i = 1; i < n - 1; i++)
        {
            min = Math.Min(min, diff[i] + diff[i - 1]);
        }

        Console.WriteLine(min);
    }
}
