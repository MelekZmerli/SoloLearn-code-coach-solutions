using System;
using System.Collections.Generic;

namespace SoloLearn{
  class Program{
    static void Main(string[] args){
      Dictionary<string,string> dic = new Dictionary <string,string>();
      String[] input = Console.ReadLine().Split(' ');
      dic.Add("Grr","Lion");
      dic.Add("Rawr","Tiger");      
      dic.Add("Ssss","Snake");      
      dic.Add("Chirp","Bird");
      
      String res = "";
      foreach(String s in input){
        res += dic[s]+' ';
      }
      Console.Write(res);
    }
  }
}
