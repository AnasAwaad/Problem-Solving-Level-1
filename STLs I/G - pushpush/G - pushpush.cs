
namespace PS;

internal class Program
{
    static void Main(string[] args)
    {
        int t = 1;
        //t = int.Parse(Console.ReadLine());
        while (t > 0)
        {
            solve();
            t--;
        }

    }

    private static void solve()
    {
        int n = int.Parse(Console.ReadLine());
        string[] line = Console.ReadLine().Split(' ');

        var ls = new LinkedList<int>();
        var flag = false;

        foreach (var num in line)
        {
            if (!flag)
                ls.AddLast(int.Parse(num));
            else
                ls.AddFirst(int.Parse(num));
            flag = !flag;
        }

        while (ls.Count > 0)
        {
            if (flag)
            {
                Console.Write(ls.Last.Value + " ");
                ls.RemoveLast();
            }
            else
            {
                Console.Write(ls.First.Value + " ");
                ls.RemoveFirst();
            }
        }

    }
}
