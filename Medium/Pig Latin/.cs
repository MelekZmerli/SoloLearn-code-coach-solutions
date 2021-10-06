using System;

namespace SoloLearn{
  class Program{
    static void Main(String[] args){
      String[] words = Console.ReadLine().Split();
      String res = "";
      foreach(String word in words){
        res += word.Substring(1)+word[0]+"ay ";
      }
      Console.Write(res);
    }
  }
}
