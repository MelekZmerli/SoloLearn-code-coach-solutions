import java.util.Scanner;
public class Program{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = 0,s = 0;
        String pass = sc.nextLine();
        for(int i = 0;i < pass.length();i++){
            if(Character.isDigit(pass.charAt(i)))
                n++;
            if(!Character.isDigit(pass.charAt(i))&&!Character.isLetter(pass.charAt(i)))
                s++;
            if(pass.length() > 7 && n > 1 && s > 1)
                System.out.println("Strong");
            else
                System.out.println("Weak");
        }
    }
}