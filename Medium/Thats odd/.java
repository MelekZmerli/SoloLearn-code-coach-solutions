import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int length = sc.nextInt();
    int sum = 0;
    for(int i = 0;i < length;i++){
      int s = sc.nextInt();
      if(s%2 == 0){
        sum += s;
      }
    }
    System.out.println(sum);
 }
}     
