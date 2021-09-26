using System;
namespace SoloLearn{
  class Program{
    static void Main(string[] args){
      int sum = 0;
      int len = Convert.ToInt32(Console.ReadLine());
      for(int i = 0;i < len;i++){
        int s = Convert.ToInt32(Console.ReadLine());
        if( s%2 == 0){
          sum += s;
        }
      }
      Console.Write(sum);
    }
  }
}
