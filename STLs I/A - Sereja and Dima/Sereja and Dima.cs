namespace PS;

internal class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        string[] inputs = Console.ReadLine().Split(' ');

        LinkedList<int> linkedList = new LinkedList<int>();

        foreach (var val in inputs)
        {
            linkedList.AddLast(int.Parse(val));
        }

        int sum1 = 0, sum2 = 0;
        bool flag = false;
        while (linkedList.Count > 0)
        {
            var last = linkedList.Last.Value;
            var first = linkedList.First.Value;

            int val = 0;
            if (last > first)
            {
                val = last;
                linkedList.RemoveLast();
            }
            else
            {
                val = first;
                linkedList.RemoveFirst();
            }

            if (!flag)
                sum1 += val;
            else
                sum2 += val;

            flag = !flag;
        }
        Console.WriteLine($"{sum1} {sum2}");
    }
}
