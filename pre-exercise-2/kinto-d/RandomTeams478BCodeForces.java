import java.util.Scanner;

public class Main {

    // kinto_d2 	478B - Random Teams 	Java 8 	Accepted 	140 ms 	20500 KB

    static long friendship(long n){
        return n *  (n - 1) / 2 ;
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        long participant = in.nextLong();
        long team = in.nextLong();

        // searching max
        long maxTeam = participant - (team - 1);
        long maxFriend = 0;
        long minFriend = 0;

        maxFriend = friendship(maxTeam);

        if (team == 1){
            minFriend = maxFriend;

        } else {

            // p = 15, t= 6
            //
            // 3, 3, 3, 2, 2, 2 ||| 3, 3, 3, 1, 1, 1 = 12 friendship

//            long divider = (float) Math.round(participant / team);
//            double lastTeam = participant % divider;
//            minFriend = friendship(divider) * (team - 1) + friendship(lastTeam);

//          // 2,2,2,2,2,5 not evenly distributed !wrong!!

            long divider = participant / team; // 2
            long lastTeam = participant % team; // 3

            minFriend = friendship(divider + 1) * lastTeam + friendship(divider) * (team - lastTeam);
            // f(2) * (6 - 3) + f(2 + 1) * 3


        }

        System.out.println(String.format("%s %s", minFriend, maxFriend));

    }
}
