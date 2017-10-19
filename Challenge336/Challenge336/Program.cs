using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Challenge336
{
    class Program
    {
        static void Main(string[] args)
        {
            //Asking for the number of values/queries is unnecessary other than to accept required input
            Console.WriteLine("Please enter the number of values given followed by the number of queries:");
            Console.ReadLine();

            Console.WriteLine("Please enter the numbers for consumption:");
            string[] numbers_string = Console.ReadLine().Split();
            List<int> numbers = new List<int>();
            foreach (var num in numbers_string)
                numbers.Add(Int32.Parse(num));

            Console.WriteLine("Please enter the queries:");
            string[] queries_string = Console.ReadLine().Split();
            List<int> queries = new List<int>();
            foreach (var num in queries_string)
                queries.Add(Int32.Parse(num));

            int result = 0;
            for (int i = 0; i < queries.Count; ++i)
            {
                for (int j = 0; j < numbers.Count; ++j)
                    if (IsEqualOrGreaterAfterConsumption(numbers[j], queries[i], numbers))
                        ++result;
                Console.WriteLine("The result of query #{0} is: {1}", i+1, result);
                result = 0;
            }
        }

        static bool IsEqualOrGreaterAfterConsumption(int cannibal_number, int query, List<int> numbers)
        {        
            bool result = false;

            if (cannibal_number >= query)
                result = true;
            else
            {
                int count = cannibal_number;
                foreach (var num in numbers)
                    if (num < cannibal_number)
                        ++count;
                if (count >= query)
                    result = true;
            }

            return result;
        }
    }
}
