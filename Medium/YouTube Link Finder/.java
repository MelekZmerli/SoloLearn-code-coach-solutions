import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    String link = sc.nextLine();
    if(link.indexOf('=')!=-1)
      System.out.println(link.substring(link.indexOf('=')+1));
    else
      System.out.println(link.substring(17));
  }
}
