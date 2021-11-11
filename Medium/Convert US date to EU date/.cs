using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
           
        String d=Console.ReadLine();
String[]l;
Dictionary <String,String> months=new Dictionary<String,String> (){
    {"January","1"},
    {"February","2"},
    {"March","3"},
    {"April","4"},
    {"May","5"},
    {"June","6"},
    {"July","7"},
    {"August","8"},
    {"September","9"},
    {"October","10"},
    {"November","11"},
    {"December","12"}
};
if (d.Contains('/')){
    l=d.Split("/");
    Console.Write(l[1]+'/'+l[0]+'/'+l[2]);}
else{
    l=d.Split(" ");
   String day=l[1];
    Console.Write(l[1].Substring(0,(l[1].Length-1))+'/'+months[l[0]]+'/'+l[2]);

        }
    }
}
}