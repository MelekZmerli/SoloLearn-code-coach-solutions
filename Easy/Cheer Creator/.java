import java.util.Scanner;

public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int yrds = sc.nextInt();
    if (yrds > 10){
      System.out.println("High Five");
    }
    else if (yrds >= 1){
      int i = 0;
      while(i < yrds){
        System.out.print("Ra!");
        i++;
      }
    }
    else 
      System.out.print("shh");
  }
}
