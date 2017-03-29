package com.kinto;

//import java.util.Arrays;
import java.util.Scanner;

// 	Accepted 	* 	120 ms 	9424 KB 	0 1

public class Mergedge {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

//        System.out.println(String.format("Hei Kamu %d\n", 49));

        int x, y;
        x = in.nextInt();
        y = in.nextInt();

        // matrix 2d container
        int[][] matrixSquare = new int[x][y];

        for (int i = 0; i < x; i++) {
            String row = in.next();
            String[] bitStr = row.split("");

            // build matrix
            int[] bitsInt = new int[bitStr.length];
            for (int j = 0; j < bitStr.length; j++) {
                bitsInt[j] = Integer.valueOf(bitStr[j]);
            }

            matrixSquare[i] = bitsInt;

        }

        //System.out.println(Arrays.deepToString(matrixSquare));
        int sticks = 0;

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {

                // first row condition - MAYBE OKE
                if (i == 0){

                    // first blocks
                    if (j == 0){
                        sticks += (matrixSquare[i][j] == 1) ?  4 : 0;
                    } else {

                        // if left side is exist
                        if (matrixSquare[i][j-1] == 1) {
                            sticks += (matrixSquare[i][j] == 1) ?  3 : 0;
                        } else {
                            sticks += (matrixSquare[i][j] == 1) ?  4 : 0;
                        }
                    }

                // sisa row condition - SEEMS OKAY
                } else {

                    // first block SEEMS OKAY
                    if (j == 0){

                        // only check top blocks
                        if (matrixSquare[i-1][j] == 1){

                            sticks += (matrixSquare[i][j] == 1) ?  3 : 0;

                        } else {
                            sticks += (matrixSquare[i][j] == 1) ?  4 : 0;

                        }

                    // not first block - SEEMS OKAY
                    } else {

                        // top is exist- SEEMS OKAY
                        if(matrixSquare[i-1][j] == 1){

                            // side left is exist
                            if (matrixSquare[i][j-1] == 1){
                                sticks += (matrixSquare[i][j] == 1) ?  2 : 0;

                            // side left not exist
                            } else {
                                sticks += (matrixSquare[i][j] == 1) ?  3 : 0;

                            }

                        // top not exist - SEEMS OKAY
                        } else {

                            // side left is exist
                            if (matrixSquare[i][j-1] == 1){
                                sticks += (matrixSquare[i][j] == 1) ?  3 : 0;

                                // side left not exist
                            } else {
                                sticks += (matrixSquare[i][j] == 1) ?  4 : 0;
                            }
                        }

                    }

                }
            }
        }

        System.out.println(sticks);

    }
}


//5 5
//        10111
//        10100
//        10111
//        10100
//        10100
