import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    int gain;
    Scanner sc = new Scanner(System.in);
    gain = sc.nextInt();
    gain = gain*3-21;
    if (gain < 0)
      System.out.println("Loss");
    else if (gain > 0)
      System.out.println("Profit");
    else 
      System.out.println("Broke Even");
  }
}
