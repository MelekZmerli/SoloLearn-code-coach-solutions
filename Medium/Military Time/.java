import java.util.Scanner;
public class Program
{
public static String converT(String text){
    if (text.charAt(5) == 'A')
        return '0'+text.substring(0,5) ;



    else if (text.charAt(5) == 'P')
           switch (text.charAt(0)){
           case '1':
                return "13"+text.substring(1,4) ;
            case '2':
                return "14"+text.substring(1,4) ;
            case '3':
                return "15"+ text.substring(1,4) ;
            case '4':
                return "16"+text.substring(1,4) ;
            case '5':
                return "17"+text.substring(1,4) ;
            case '6':
                return "18"+text.substring(1,4) ;
            case '7':
                return "19"+text.substring(1,4) ;
            case '8':
                return "20"+text.substring(1,4) ;
            default:
               return "21"+text.substring(1,4);}
           


    else if (text.charAt(6) == 'A'){
        if (text.charAt(1)=='2')
            return "00"+ text.substring(2,5);
        else
            return text.substring(0,5) ; }



    else
        switch (text.charAt(1)){
            case '0':
            return "22"+ text.substring(2,5) ;
        case '1':
            return "23"+text.substring(2,5) ;
           
        case '2':
            return text.substring(0,5);
        default:
            return (String.valueOf(Integer.parseInt(text.substring(0,2))+12)+text.substring(2,5));}
}
public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.print(converT(sc.nextLine())) ;
  }
}