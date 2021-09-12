import java.util.Scanner;
import java.lang.Math;
public class Program{
  public static void main(String []args){
    Scanner input = new Scanner(System.in);
    int houses = input.nextInt();
    float total = 200/(float)houses;
    System.out.println((int)Math.ceil(total));
  }
}
