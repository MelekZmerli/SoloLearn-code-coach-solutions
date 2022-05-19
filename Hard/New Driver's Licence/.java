import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Arrays;

public class Program{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int agents = Integer.parseInt(sc.nextLine());
        ArrayList<String> candidates = new ArrayList<String>(Arrays.asList(sc.nextLine().split(" ")));
        candidates.add(name);
        Collections.sort(candidates);
        System.out.println(candidates.indexOf(name) / agents * 20 + 20);
    }
}