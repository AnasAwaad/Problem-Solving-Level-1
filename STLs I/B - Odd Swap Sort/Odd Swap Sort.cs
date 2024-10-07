namespace PS;

internal class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        while (n-- > 0)
        {
            int x = int.Parse(Console.ReadLine());
            string[] numbers = Console.ReadLine().Split(' ');

            List<int> even = new List<int>();
            List<int> odd = new List<int>();

            foreach (var num in numbers)
            {
                int val = int.Parse(num);
                if (val % 2 == 0)
                    even.Add(val);
                else
                    odd.Add(val);
            }
            bool flag = false;
            for (int i = 1; i < odd.Count; i++)
            {
                if (odd[i] < odd[i - 1])
                {
                    flag = true;
                    break;
                }
            }

            for (int i = 1; i < even.Count; i++)
            {
                if (even[i] < even[i - 1])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                Console.WriteLine("No");
            else
                Console.WriteLine("Yes");
        }
    }
}
