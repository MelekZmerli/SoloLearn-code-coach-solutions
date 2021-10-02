import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    StringBuilder sb = new StringBuilder(sc.nextLine().replaceAll("[^a-zA-Z ]",""));
    System.out.print(sb.reverse());
  }
}
