import java.util.Arrays;
import java.util.Scanner;

public class problemset_problem_479_A {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int a, b, c;
        int[] y = new int[6] ;
        a = in.nextInt(); b = in.nextInt(); c = in.nextInt();
        y[0] = a+b+c ;
        y[1] = a+b*c;
        y[2] = a*b+c;
        y[3] = a*(b+c);
        y[4] = (a+b)*c;
        y[5] = a*b*c;

        Arrays.sort(y);

        System.out.println(y[5]);
   }
}
