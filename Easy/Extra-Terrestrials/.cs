using System;

namespace SoloLearn{
  class Program{
    static void Main(string[] args){
      char[] msg = Console.ReadLine().ToCharArray();
      Array.Reverse(msg);
      Console.Write(new string(msg));
    }
  }
}  
