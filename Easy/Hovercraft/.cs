using System;

namespace SoloLearn{
  class Program{
    static void Main(String[] args){
      int gain = Convert.ToInt32(Console.ReadLine());
      gain = gain*3-21;
      if(gain < 0) Console.Write("Loss");
      else if(gain > 0) Console.Write("Profit");
      else Console.Write("Broke Even");
    }
  }
}
