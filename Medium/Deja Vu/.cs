using System;

namespace SoloLearn{
  class Program{
    static void Main(String[] args){
      String msg = Console.ReadLine();
      foreach(char c in msg){
        int count = 0;
        foreach(char c2 in msg){
          if(c2 == c)
            count++;
        }
        if (count > 1){
          Console.Write("Deja Vu");
          Environment.Exit(0);
        }
      }
      Console.Write("Unique");
    }
  }
}       
