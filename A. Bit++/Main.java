import java.util.*;

public class Main{
    public static void main(String args[]){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int x = 0;
        for(int i = 0; i<n; i++){
            String s;
            s = sc.next();
            if(s.equals("++X") || s.equals("X++")){
                x++;
            }
            else if(s.equals("X--") || s.equals("--X")){
                x--;
            }
        }
        System.out.println(x);
    }
}