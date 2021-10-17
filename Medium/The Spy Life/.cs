using System;
using System.Text.RegularExpressions;

namespace SoloLearn{
  class Program{
    static void Main(String[] args){
      string msg = Regex.Replace(Console.ReadLine(),@"[^a-zA-Z ]",String.Empty);
      char[] arr = msg.ToCharArray();
      Array.Reverse(arr);
      Console.Write(new string(arr));
      }
  }
}
