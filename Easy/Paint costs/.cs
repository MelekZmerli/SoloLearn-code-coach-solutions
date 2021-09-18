using System;

namespace SoloLearn{
  class Program{
    static void Main(string[] args){
      float paint;
      paint = Convert.ToInt32(Console.ReadLine());
      paint = paint*5+40;
      Console.Write((int)Math.Ceiling((double)paint+paint/10));
    }
  }
}
