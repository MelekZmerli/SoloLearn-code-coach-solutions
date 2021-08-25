using System;
using System.Collection.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SoloLearn
{
  class Program
  {
    static void Main(String[] args)
    {
      int siblings,popsicles;
      siblings = Convert.ToInt32(Console.ReadLine());
      popsicles = Convert.ToInt32(Console.ReadLine());
      if(popsicles%siblings==0){
        Console.Write("give away");
      }
      else{
        Console.Write("eat them yourself");
      }
    }
  }
}      
    
