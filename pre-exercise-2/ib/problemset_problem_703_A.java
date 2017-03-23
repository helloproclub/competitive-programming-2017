import java.util.Arrays ;
import java.util.Scanner ;

public class problemset_problem_703_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in) ;
        int n = in.nextInt();
        int m =0; int c=0;
        for (int i = 0; i< n; i++){
            int x = in.nextInt();
            int y = in.nextInt();
            if (x>y){
                m++;
            } else if (x<y){
                c++;
            }
        }

        if (m>c){
            System.out.println("Mishka");
        } else if (m<c){
            System.out.println("Chris");
        } else {
          System.out.println("Friendship is magic!^^");
        }
    }
}
