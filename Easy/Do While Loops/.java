import java.util.Scanner;
public class Program{
  public static main(String[] args){
    Scanner read = new Scanner(System.in);
    int password;
    do{
        password = read.nexInt();
        System.out.println("Write password");
    }while((password != 8819) && (read.hasNext()));
    read.close();
  }
}
