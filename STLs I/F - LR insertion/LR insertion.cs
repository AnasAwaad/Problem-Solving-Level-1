
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
        string s = Console.ReadLine();

        var numbers = new List<int>();
        var st = new Stack<int>();

        st.Push(0);

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'L')
                st.Push(i);
            else
            {
                numbers.Add(st.Peek());
                st.Pop();
                st.Push(i);
            }
        }

        while (st.Count > 0)
        {
            numbers.Add(st.Peek());
            st.Pop();
        }

        foreach (var num in numbers)
        {
            Console.Write(num + " ");
        }



    }
}
