using System;

namespace SoloLearn{
   class Program{
    static void Main(String[] args){
      int houses;
      double total;
      houses = Convert.ToInt32(Console.ReadLine());
      total = Math.Ceiling((double) 200/houses);
      Console.Write((int)total);
    }
  }
}
