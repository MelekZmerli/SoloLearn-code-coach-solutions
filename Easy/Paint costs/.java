import java.util.Scanner;
import java.lang.Math;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    float colors = sc.nextFloat();
    colors = colors*5+40;
    int total = (int)Math.ceil(colors + colors/10);
    System.out.println(total);
  }
}
