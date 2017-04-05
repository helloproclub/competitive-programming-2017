import java.util.Scanner;

/**
 * Created by g40 on 02/04/17.
 */
public class BatikCap {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int caseIn = in.nextInt();
        for (int i = 0; i < caseIn; i++) {

            int p,m,n,r,c;
            p = in.nextInt();
            m = in.nextInt();
            n = in.nextInt();
            r = in.nextInt();
            c = in.nextInt();

            System.out.println(String.format("Case #%s:", i + 1));

            String[] patterns = new String[p];
            int x = 0;
            for (int j = 0; j < p * m; j++) {
                String temp = in.next();
                if (j % 2 == 0) {
                    patterns[x] = temp;
                    x++;
                }
            }

//            System.out.println(Arrays.toString(patterns));

            int lengthPattern = 0;
            //r = 6, c = 8
            //setiap kelipatan 2 dia ganti jadi 1,2,3, tapi tetap gak rubah untuk selanjutnya
            // m n = 2 x 2
            //

            try {
                int counterPattern = 0;
                for (int j = 0; j < r; j++) {

                    if (counterPattern / m >= p) {
                        counterPattern = 0;
                    } else {
                        lengthPattern = counterPattern / m;
                    }

                    for (int k = 0; k < c / m; k++) {
                        System.out.print(patterns[lengthPattern]);
                        lengthPattern++;
                        if (lengthPattern == p){
                            lengthPattern = 0;
                        }
                    }
                    System.out.println();
                    counterPattern++;
                }

            } catch (Exception e){
                System.out.println("EX");

            }

        }
    }
}
