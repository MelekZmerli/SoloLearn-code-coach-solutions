import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    String msg = sc.nextLine();
    for(Character c:msg.toCharArray()){
      long count = msg.chars().filter(ch -> ch == c).count();
      if (count > 1){
        System.out.print("Deja Vu");
        System.exit();
      }
    }
    System.out.print("Unique");
  }
}
