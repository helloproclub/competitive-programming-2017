import java.util.Scanner;

public class ReunionParty {
    // accepted : submission id = 187354
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 1; i<=n; i++){
            long y = in.nextInt();
            /*
            y   = x(x-1) / 2
            y   = (x^2 - x ) / 2
            2y  = x^2 - x
            x^2 - x - 2y = 0
            Ax^2 + Bx + C = 0
            double A = 1 ;
            double B = -1;
            double C = -2*y;
            */
            long d = (1 - 4*(-2*y)) ;
//            System.out.println(String.format("y= %d",y));
//            System.out.println(String.format("d= %d",d));
            if (d == 0){
                double ans = (1+Math.sqrt(d))/2 ;
                System.out.println(Math.round(ans));
            } else {
                double r1 = Math.round((1+Math.sqrt(d))/2);
                double r2 = Math.round((1-Math.sqrt(d))/2);
                System.out.println(Math.round(r1));
            }

        }
    }
}
