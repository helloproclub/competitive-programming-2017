import java.util.Scanner;

public class Acounting {
    //not yet accepted.
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 1; i<=n; i++){
            int x = in.nextInt();
            int y = in.nextInt();

            if (((y-x)%12 != 0 ) || y<=x) System.out.println(String.format("Case #%d: %s", i, "impossible"));
            else {
                int z = (x+(7*((y-x)/12)));
                System.out.println(String.format("Case #%d: %d", i, z));
            }
        }

    }
}
