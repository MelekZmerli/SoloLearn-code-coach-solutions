import java.util.*;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    String msg = sc.nextLine().replaceAll("[^a-zA-Z ]","");
    StringTokenizer st = new StringTokenizer(msg);
    System.out.print(msg.length()/st.countTokens());
  }
}
