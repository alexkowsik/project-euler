using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjectEuler3
{
    class Program
    {
        static void Main(string[] args)
        {
            ulong a = 2;
            for (int i = 1; i < 1001; i++)
            {
                a = a * 2;
                Console.WriteLine(a);
                Console.WriteLine("Hallo Welt!");
                Console.ReadLine();
            }
            // Console.WriteLine(a);
            Console.ReadLine();
        }
    }
}
