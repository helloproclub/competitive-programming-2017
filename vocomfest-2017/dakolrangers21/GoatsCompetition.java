import java.util.Scanner;

/**
 * Created by g40 on 02/04/17.
 */

public class GoatsCompetition {


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int caseIn = in.nextInt();
        for (int i = 0; i < caseIn; i++) {
            int[] goats = new int[4];
            goats[0] = in.nextInt();
            goats[1] = in.nextInt();
            goats[2] = in.nextInt();
            goats[3] = in.nextInt();
            int high = in.nextInt();

            for (int j = 0; j < goats.length; j++) {
                for (int k = j + 1; k < goats.length; k++) {
                    int tmp = 0;
                    if (goats[j] > goats[k]) {
                        tmp = goats[j];
                        goats[j] = goats[k];
                        goats[k] = tmp;
                    }
                }
            }

            if(goats[3] > high){
                System.out.println(String.format("Case #%s: new record!", i + 1));
            } else {
                System.out.println(String.format("Case #%s: no new record", i + 1));
            }
        }
    }
}
