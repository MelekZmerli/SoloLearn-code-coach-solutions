using System;

namespace SoloLearn{
  class Program{
    static void Main(String[] args){
      String msg = Console.ReadLine();
      if((msg.Split('.').Length-1) == 2)
        Console.Write(msg.Substring(32));
      else
        Console.Write(msg.Substring(17));
    }
  }
}
