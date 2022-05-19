using System;
using System.Collections.Generic;
using System.Linq;

namespace Sololearn{
    class Program{
        static void Main(String[] args){
            String name = Console.ReadLine();
            int agents = Convert.ToInt32(Console.ReadLine());
            List<String> candidates = Console.ReadLine.Split(" ").ToList();
            candidates.Add(name);
            candidates.Sort();
            Console.Write(candidates.IndexOf(me) / agents * 20 + 20);
        }
    }
}