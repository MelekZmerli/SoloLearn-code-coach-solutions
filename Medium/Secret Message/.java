import java.util.Scanner;
public class Program{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String alphabet="abcdefghijklmnopqrstuvwxyz";
        String res ="";
        for(char c:sc.nextLine().toLowerCase().toCharArray()){
            if(alphabet.indexOf(c)!=-1)
                res += alphabet.charAt(alphabet.length()-1-alphabet.indexOf(c));
            else
                res += ' ';
        }    
        System.out.print(res);
    }
}