import java.util.*;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    StringTokenizer st = new StringTokenizer(sc.nextLine());
    String pig = "";
    while(st.hasMoreTokens()){
      String t = st.nextToken();
      pig += t.substring(1) + t.toCharArray()[0] + "ay ";
    }
    System.out.print(pig);
  }
}
