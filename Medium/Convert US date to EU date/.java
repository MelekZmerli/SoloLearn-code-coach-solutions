import java.util.*;

public class Program
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String d=sc.nextLine();
String[]l;
HashMap <String,String> months=new HashMap<String,String> (){{
    put("January","1");
    put("February","2");
    put("March","3");
    put("April","4");
    put("May","5");
    put("June","6");
    put("July","7");
    put("August","8");
    put("September","9");
    put("October","10");
    put("November","11");
    put("December","12");
}};
if (d.indexOf('/')!=-1){
    l=d.split("/");
    System.out.print(l[1]+'/'+l[0]+'/'+l[2]);}
else{
    l=d.split(" ");
   String day=l[1];
    System.out.print(l[1].substring(0,(l[1].length()-1))+'/'+months.get(l[0])+'/'+l[2]);
    }
    }
}