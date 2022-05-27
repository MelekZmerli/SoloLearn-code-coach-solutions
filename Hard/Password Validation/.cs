using System;

namespace Sololearn{
    class Program{
        static void Main(string[] args){
            int num = 0,sym = 0;
            String p = Console.ReadLine();
            foreach(char c in p){
                if(Char.IsDigit(c)){
                    num++;
                }
                else if(Char.IsSymbol(c) || Char.IsPunctuation(c)){
                    sym++;
                }
            }

            if(p.Length > 7 && num > 1 && sym > 1){
                Console.WriteLine("Strong");
            }
            else{
                Console.Write("Weak");
            }
        }
    }
}