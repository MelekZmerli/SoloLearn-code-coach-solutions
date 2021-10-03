import java.util.Scanner;

public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print(sc.nextLine().replace("10","ten").replace("0","zero").replace("1","one").replace("2","two").replace("3","three").replace("4","four").replace("5","five").replace("6","six").replace("7","seven").replace("8","eight").replace("9","nine"));
  }
}
