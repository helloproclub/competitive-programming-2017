/**
 * Created by g40 on 02/04/17.
 */
import java.util.Scanner;
import java.util.concurrent.ForkJoinPool;

/**
 * Created by Kurniawan Yudha on 02/04/2017.
 */
public class Bomb {
    static class Coordinate{
        public Coordinate(int x, int y) {
            this.x = x;
            this.y = y;
        }
        int x;
        int y;
    }

    static class PairCoordinate{
        public PairCoordinate(Coordinate a, Coordinate b, int dist) {
            this.a = a;
            this.b = b;
            this.dist = dist;
        }
        Coordinate a;
        Coordinate b;
        int dist;
    }

    public static void main(String[] args){
//        long startTime = System.currentTimeMillis();
        Scanner scanner = new Scanner(System.in);
        int d = scanner.nextInt(); // test case
        for (int i=1; i<=d; i++){
            int n = scanner.nextInt(); // count of goat
            int r = scanner.nextInt(); // bomb radius
            r = (r*2);
            r = r*r;

            Coordinate coor[] = new Coordinate[n];
            for (int j=0; j<n; j++){
                coor[j] = new Coordinate(scanner.nextInt(), scanner.nextInt());
            }

            PairCoordinate minDist = null;

            for (int j=0; j<n-1; j++){
                for (int k=j+1; k<n; k++){
                    int a2 = (coor[j].x-coor[k].x);
                    int b2 = (coor[j].y-coor[k].y);
                    int dist = (a2*a2)+(b2*b2);
//                    long dist = ((coor[j].x-coor[k].x)^2)+((coor[j].y-coor[k].y)^2);
//                    return ;
//                    double dist = coor[j].distance(coor[k]);
                    if (dist<=r && dist!=0){
                        if (minDist==null){
                            minDist = new PairCoordinate(coor[j], coor[k], dist);
                        } else {
                            if (minDist.dist>dist){
                                minDist = new PairCoordinate(coor[j], coor[k], dist);
                            }
                        }
                    }
                }
            }
            if (minDist==null)
                System.out.printf("Case #%d: -1\n", i);
            else {
//                Coordinate middle = minDist.middle();

                System.out.printf("Case #%d: %.1f %.1f\n",i ,
                        (double)(minDist.a.x+minDist.b.x)/2,
                        (double)(minDist.a.y+minDist.b.y)/2);
            }
        }

//        long endTime   = System.currentTimeMillis();
//        long totalTime = endTime - startTime;
//        System.out.println(totalTime);
    }
}