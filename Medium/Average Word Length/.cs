using System;

namespace SoloLearn{
  class Program{
    static void Main(string[] args){
      String msg = Console.ReadLine();
      List<char> symbols = new List <char>(){'#','@','%','*','/','&','$'};
      foreach(char c in symbols){
        msg = msg.Replace(c.ToString(),String.Empty);
      }
      Console.Write((int)(msg.Length/msg.Split(' ').Length));
    }
  }
}
