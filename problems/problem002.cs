using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjectEuler2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] list = new int[10000];
            list[0] = 1;
            list[1] = 2;
            int sum = 0;
            int check = 0;
            
            for (int x = 2; x <= 50; x++)
            {
                list[x] = list[x-2] + list[x-1];
                //Ausgabe zur Kontrolle: Console.WriteLine(list[x]);

               if (list[x] > 4000000)
                {
                    list[x] = list[x-1];
                    check = x;
                    break;
                }            
            }

            for (int y = 0; y < check; y++)
            {
                if (list[y] % 2 == 0)
                {
                    sum += list[y];
                   Console.WriteLine(sum);
                }
            }
            Console.WriteLine(sum);
            Console.ReadLine();
        }
    }
}
