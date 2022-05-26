using System;

namespace Sololearn{
    class Program{
        static void Main(string[] args){
            bool money = false, thief = false;
            string f = Console.ReadLine();
            foreach(c in f){
                if(c == '$'){
                    if(thief){
                        Console.WriteLine("ALARM");
                        Environment.Exit(0);
                    }
                    m = true;
                }
                else if(c == 'T'){
                    if(money){
                        Console.WriteLine("ALARM");
                        Environment.Exit(0);
                    }
                    thief = true;
                }
                else if(c == 'G'){
                    money = false;
                    thief = false;
                }
            }

            Console.WriteLine("quiet");
        }
    }
}