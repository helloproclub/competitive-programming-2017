import java.util.Scanner;

 class TextFormatter {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int caseNum = in.nextInt();

        for (int i = 1; i <= caseNum; i++) {

            // input max character;
            int maxLength = in.nextInt();

            // input character until end;
//            StringBuilder sb = new StringBuilder();
//            String temp = in.next();
//            sb.append(temp + " ");
//            while (!temp.equals("END")){
//                temp = in.next();
//                sb.append(temp + " ");
//            }
//            String[] tokens = sb.toString().split(" ");

            String sb = "";
            String temp = in.next();
            sb += temp + " ";
            while (!temp.equals("END")){
                temp = in.next();
                sb += temp + " ";
            }
            String[] tokens = sb.split(" ");

            int count = 0;
            System.out.println("Case #" + i + ":");

//            for (String token : tokens){
//                if (! token.equals("END"))
//                    if (token.length() + count <= maxLength){
//                        System.out.print(token);
//                        count += token.length() + 1;
//                    } else {
//                        System.out.println();
//                        System.out.print(token);
//                        count = token.length() + 1;
//                    }
//            }
//            System.out.println();

            int idx = 0;
            while( idx < tokens.length){
                if (!tokens[idx].equals("END")){

                    if(tokens[idx].length() + count <= maxLength){
                        count += tokens[idx].length() + 1;
                        if(! (tokens[idx + 1].length() + count <= maxLength) || (tokens[idx + 1].equals("END"))){
                            System.out.print(tokens[idx]);
                        } else {
                            System.out.print(tokens[idx] + " ");
                        }

                    } else {
                        System.out.println();
                        count = tokens[idx].length() + 1;
                        if(! (tokens[idx + 1].length() + count <= maxLength) || (tokens[idx + 1].equals("END"))){
                            System.out.print(tokens[idx]);
                        } else {
                            System.out.print(tokens[idx] + " ");
                        }
                    }
                }
                idx++;
            }
            System.out.println();
        }
    }
}
