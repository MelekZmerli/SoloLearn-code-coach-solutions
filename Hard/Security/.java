import java.util.Scanner;
public class Program{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().replace("x","");
        for(int i = 0; i < s.length();i++){
            if(((s.charAt(i) == '$') && (s.charAt(i-1) == 'T')) || ((s.charAt(i) == 'T') && (s.charAt(i-1) == '$'))){
                System.out.print("ALARM");
                System.exit(0);
            }
        }
        System.out.print("quiet");
    }