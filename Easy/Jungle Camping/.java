import java.util.*;
public class Program{
  public static void main(String[] args){
    Scanner sc =new Scanner(System.in);
    Hashtable<String,String> d = new Hashtable<String,String>(){{
                                                                  put("Grr","Lion");
                                                                  put("Rawr","Tiger");
                                                                  put("Ssss","Snake");  
                                                                  put("Chirp","Bird");
                                                                }};
    StringTokenizer st = new StringTokenizer(sc.nextLine()," ");
    String rs = "";
    while (st.hasMoreTokens()){
      rs += d.get(st.nextToken())+" ";
    }
    System.out.println(rs);
  }
}
