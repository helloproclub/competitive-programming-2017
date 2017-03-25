import java.util.Arrays;
import java.util.Scanner;

public class Expression479ACodeForces {

    //  Java 8 Accepted 140 ms 20400 KB

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int a, b, c;
        a = in.nextInt(); b = in.nextInt(); c = in.nextInt();

        int firstOp = a + b * c;
        int secOp = (a + b) * c;
        int thirdOp = a * b + c;
        int fourthOp = a * (b + c);
        int fifthOp = a * b * c;
        int sixthOp = a + b + c;

        int results[] = {firstOp, secOp, thirdOp, fourthOp, fifthOp, sixthOp};
        Arrays.sort(results);

        System.out.println(results[results.length-1]);

    }
}
