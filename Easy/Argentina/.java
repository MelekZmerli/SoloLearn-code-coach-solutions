import java.util.Scanner;

public class Program{
  public static void main(String[] args){
    int pesos, dollars;
    Scanner sc = new Scanner(System.in);
    pesos = sc.nextInt();
    dollars = sc.nextInt();
    pesos = pesos*2/100;
    if(pesos<dollars)
      System.out.println("Pesos");
    else
      System.out.println("Dollars");
  }
}
