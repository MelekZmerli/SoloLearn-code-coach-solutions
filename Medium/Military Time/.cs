using System;

namespace SoloLearn
{
    class Program
    {
         static String converT(String text){
    if (text[5] == 'A')
        return '0'+text.Substring(0,5) ;



    else if (text[5] == 'P')
           switch (text[0]){
           case '1':
                return "13"+text.Substring(1,4) ;
            case '2':
                return "14"+text.Substring(1,4) ;
            case '3':
                return "15"+ text.Substring(1,4) ;
            case '4':
                return "16"+text.Substring(1,4) ;
            case '5':
                return "17"+text.Substring(1,4) ;
            case '6':
                return "18"+text.Substring(1,4) ;
            case '7':
                return "19"+text.Substring(1,4) ;
            case '8':
                return "20"+text.Substring(1,4) ;
            default:
               return "21"+text.Substring(1,4);}
           


    else if (text[6] == 'A'){
        if (text[1]=='2')
            return "00"+ text.Substring(2,5);
        else
            return text.Substring(0,5) ; }



    else
        switch (text[1]){
            case '0':
            return "22"+ text.Substring(2,4) ;
        case '1':
            return "23"+text.Substring(2,4) ;
           
        case '2':
            return text.Substring(0,4);
        default:
            return ((Int32.Parse(text.Substring(0,2))+12).ToString()+text.Substring(2,4));}
}
        static void Main(string[] args)
        {
            Console.Write(converT(Console.ReadLine()));
        }
    }
}