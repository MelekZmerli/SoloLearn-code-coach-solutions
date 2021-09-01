import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int crimes = sc.nextInt();
    if(crimes < 5){
      System.out.println("I got this!");
    }
    else if((crimes >= 5) && (crimes < 10)){
      System.out.println("Help me Batman");
    }
    else {
      System.out.println("Good Luck out there!");
    }
  }
}
