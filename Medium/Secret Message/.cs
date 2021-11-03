using System;
namespace SoloLearn{
    class Program{
        static void Main(string[] args){
            String alphabet = "abcdefghijklmnopqrstuvwxyz";
            String result = "";
            foreach(char c in Console.ReadLine().ToLower().ToCharArray()){
                if(alphabet.IndexOf(c)! = -1){
                    result += alphabet[alphabet.Length-1-a.IndexOf(c)];
                }
                else{
                    result += " ";
                }
            }
            Console.Write(result);
        }
    }
}