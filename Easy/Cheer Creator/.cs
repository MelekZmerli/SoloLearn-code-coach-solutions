using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SoloLearn{
  class Program{
    static void Main(String[] args){
      int i = 0, yrds = Convert.ToInt32(Console.ReadLine());
      if(yrds>10){
        Console.WriteLine("High Five");
      }
      else if(yrds >= 1){
        while (i < yrds){
          Console.Write("Ra!");
          i++;
        }
      }
      else Console.Write("shh");  
    }
  }
}
