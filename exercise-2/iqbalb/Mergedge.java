import java.util.Scanner;
import java.util.ArrayList;

public class Mergedge {
    // accepted : Submission id = 187323
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in) ;
        int r = in.nextInt();
        int c = in.nextInt();
        in.nextLine();
        String[] line = new String[r];
        int total = 0;
        for (int i = 0; i< r; i++){
            line[i] = in.nextLine();
            Boolean cons = false;
            for (int j = 0; j<c; j++){
                if (line[i].charAt(j)=='1'){
                    if (cons == false){
                        cons = true;
                        if (i==0) {
                            total += 4 ;
                        }
                        else { // i != 0
                            if (line[i-1].charAt(j) == '1'){
                                total += 3;
                            } else {
                                total += 4;
                            }
                        }
                    }else { //cons = true

                        if (i==0){
                            total += 3;
                        } else { // i != 0
                            if (line[i-1].charAt(j) == '1'){
                                total += 2 ;
                            } else { // baris diatas nya bukan 1
                                total += 3 ;
                            }
                        }
                    }
                } else { // chartat != 1
                    cons = false;
                }
//                System.out.print(String.format("%d, ",total));
            }

//            System.out.println(String.format("%d : %s", i, line[i]));
//            System.out.println(total);

        }
        System.out.println(total);
    }
}
