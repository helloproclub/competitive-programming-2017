import java.util.Arrays;
import java.util.Scanner;

public class MishkaGame703ACodeForces {

    //703A - Mishka and Game 	Java 8 	Accepted 	140 ms 	20500 KB

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int round = in.nextInt();

        int mishkaWin, chrisWin;
        mishkaWin =0; chrisWin = 0;
        for (int i=0; i < round; i++){
            int mishka = in.nextInt();
            int chris = in.nextInt();

            if(mishka > chris){
                mishkaWin++;
            } else if (chris > mishka) {
                chrisWin++;
            }
        }

        if(mishkaWin > chrisWin) {
            System.out.println("Mishka");

        } else if(chrisWin > mishkaWin){
            System.out.println("Chris");

        } else {
            System.out.println("Friendship is magic!^^");
        }

    }
}
