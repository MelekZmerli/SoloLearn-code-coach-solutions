import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int pts = sc.nextInt();
    int gun = sc.nextInt();
    if(pts/12>=gun)
      System.out.println("Buy it!");
    else
      System.out.println("Try again");
  }
}
