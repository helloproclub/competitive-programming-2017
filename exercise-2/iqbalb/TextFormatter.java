import java.util.Scanner;
// accepted : submission id = 187492
public class TextFormatter {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int numOfCases = in.nextInt();
        for (int i = 1; i<=numOfCases; i++){
            int k = in.nextInt();
            String text = "";
            String word = in.next();
            while (!word.equals("END")){
                text += word+"-";
                word = in.next();
            }
            String[] listWord = text.split("-");
            System.out.println(String.format("Case #%d:",i));

            int lineBuffer = 0;
            for (int counter = 0; counter < listWord.length ; counter++){
                if (listWord[counter].length() + lineBuffer  > k){
                    System.out.println();
                    counter--; //with assume that there's no word that length overvalued k
                    lineBuffer = 0;

                }else{
                    lineBuffer += listWord[counter].length() + 1;
                    if (counter < listWord.length-1){
                        if (lineBuffer + listWord[counter+1].length() > k){
                            System.out.print(listWord[counter]);
                        } else {
                            System.out.print(listWord[counter]+" ");
                        }

                    } else {
                        System.out.print(listWord[counter]); //kata terakhir tak perlu spasi
                    }
                }
            }
            System.out.println();
        }




    }
}
