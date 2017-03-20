import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    // kinto_d2 	158B - Taxi 	Java 8 	Accepted 	2620 ms 	20500 KB

    // Greedy

    public static void main(String[] args) {

        int group4 = 0;
        ArrayList<Integer> group1 , group2, group3;
        group1 = new ArrayList<>(); group2 = new ArrayList<>(); group3 = new ArrayList<>();


        Scanner in = new Scanner(System.in);
        long groupChildren = in.nextLong();


        for(int i = 0; i < groupChildren; i++){

            int numChild = in.nextInt(); //max number is 4

            switch (numChild){
                case 1 : group1.add(numChild); break;
                case 2 : group2.add(numChild); break;
                case 3 : group3.add(numChild); break;
                case 4 : group4++; break;
            }

        }

        int totalCar = group4;
        while (group3.size() != 0){
            if(group1.size() != 0){
                group3.remove(0);
                group1.remove(0);
                totalCar += 1;
            } else {
                group3.remove(0);
                totalCar += 1;
            }
        }

        int temp = 0;
        while (group2.size() != 0){
            if (temp == 4){
                temp = 0;
                totalCar += 1;

            } else {
                group2.remove(0);
                temp += 2;
            }
        }

        while (group1.size() != 0){
            if (temp == 4){
                temp = 0;
                totalCar += 1;

            } else {
                group1.remove(0);
                temp += 1;
            }
        }


        if(temp > 0) {
            totalCar += 1;
        }

        System.out.println(totalCar);

    }
}

