using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjectEuler1
{
    class Program
    {
        static void Main(string[] args)
        {
            long x = 0;
            long y = 0;
            long[] a = new long[1000];

            for (long i = 0; i < 10000; i++)
            {
                y = 3 * i;
                if (y < 1000)
                {
                    x = x + y;
                    //Console.WriteLine(y);
                    Console.WriteLine(x);
                    a[i] = y;
                }
                else
                {
                    break;
                }
            }

            for (long i = 0; i < 10000; i++)
            {
                y = 5 * i;
                if (y < 1000|a.Contains(y))
                {
                    continue;
                }
                else
                {
                    x = x + y;
                    //Console.WriteLine(y);
                    Console.WriteLine(x);
                }
            }

            Console.WriteLine(x);
            Console.ReadLine();
        }
    }
}
