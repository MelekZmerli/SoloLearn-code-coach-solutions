using System;

namespace SoloLearn{
  class Program{
    static void Main(string[] args){
      List<char> symbols = new List <char>(){'#','@','%','*','/','&','$'};
      String msg = Console.ReadLine();
      foreach(char c in symbols){
        msg = msg.Replace(c.ToString(),String.Empty);
      }
      Console.Write(msg);
    }
  }
}   
