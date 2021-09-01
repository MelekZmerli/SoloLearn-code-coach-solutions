using System;

namespace SoloLearn{
  class Program{
  static void main(string[] args){
    int crimes = Convert.ToInt32(Console.ReadLine());
    if(crimes < 5) Console.Write("I got this!");
    else if((crimes >= 5)&&(crimes < 10)) Console.Write("Help me Batman");
    else Console.Write("Good Luck out there!");
    }
  }
}
