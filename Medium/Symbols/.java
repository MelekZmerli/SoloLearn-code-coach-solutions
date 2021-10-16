import java.util.Scanner;

public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print(sc.nextLine().replace("@","").replace("#","").replace("&","").replace("/","").replace("$","").replace("*","").replace("%",""));
  }
}
