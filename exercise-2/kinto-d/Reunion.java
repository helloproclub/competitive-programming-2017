package com.kinto;

import java.util.Scanner;

/**
 * Created by g40 on 29/03/17.
 */
public class Reunion {

//    1 	Accepted 	* 	117 ms 	9424 KB

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int numGroups = in.nextInt();
        for (int i = 0; i < numGroups; i++) {
            long x = in.nextLong(); //handshake

            // x =  n *  (n - 1) / 2
            // 231 * 2 = n * (n - 1)
            // 462 = n^2 - n
            // n^2 - n - 462 = 0
            // ditambah = -1
            // dikali = -462
            // solution x1 = -22 & x2 = 21
            // for i sampai float(sqrt(21)

            x = x * 2;
            long a, b, c;
            a = 1;
            b = -1;
            c = -x;

            double D = Math.pow(b,2) - 4*a*c;

            double x1 = ( -b + Math.sqrt(D) ) / ( 2 * a );
            double x2 = ( -b - Math.sqrt(D) ) / ( 2 * a );

            System.out.println(Math.round(x1));
//            System.out.println("X1 : " + x1);
//            System.out.println("X2 : " + x2);

        }
    }
}
