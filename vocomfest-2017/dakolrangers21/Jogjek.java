import java.util.Scanner;

/**
 * Created by g40 on 02/04/17.
 */
public class Jogjek {

    public static class Driver {
        int x,y;
        String name;
        public Driver(String name, int x, int y){
            this.x = x;
            this.y = y;
            this.name = name;
        }
        public int compare(Driver point){
            return Math.abs(this.x - point.x) + Math.abs(this.y - point.y);
        }

        @Override
        public String toString() {
            return "Driver{" +
                    "x=" + x +
                    ", y=" + y +
                    ", name='" + name + '\'' +
                    '}';
        }
    }

    public static class Passenger {
        public int initX, initY;
        public int destX, destY;

        public Passenger(int initX, int initY, int destX, int destY) {
            this.initX = initX;
            this.initY = initY;
            this.destX = destX;
            this.destY = destY;
        }

        @Override
        public String toString() {
            return "Passenger{" +
                    "initX=" + initX +
                    ", initY=" + initY +
                    ", destX=" + destX +
                    ", destY=" + destY +
                    '}';
        }
    }

    public static int getDistance(Driver driver, Passenger passanger){
        return Math.abs(driver.x - passanger.initX) + Math.abs(driver.y - passanger.initY);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int caseIn = in.nextInt();
        for (int i = 0; i < caseIn; i++){
            int driver, pessanger;
            driver = in.nextInt();
            pessanger = in.nextInt();

            // input drivers
            Driver[] drivers = new Driver[driver];
            for (int j = 0; j < driver; j++) {
                String name = in.next();
                int x = in.nextInt();
                int y = in.nextInt();

                Driver temp = new Driver(name, x, y);
                drivers[j] = temp;
            }

            // input passanger
            Passenger[] passangers = new Passenger[pessanger];
            for (int j = 0; j < pessanger; j++) {
                int initX, initY;
                int destX, destY;
                initX = in.nextInt();
                initY = in.nextInt();
                destX = in.nextInt();
                destY = in.nextInt();
                Passenger pass = new Passenger(initX, initY, destX, destY);
                passangers[j] = pass;
            }

            // logic here

            System.out.println(String.format("Case #%s:", i + 1));

            Driver selected = null;
            for (int j = 0; j < pessanger; j++) {
                int dist = 99999;
                for (int k = 0; k < driver; k++) {
                    // initialization

                    int curDist = getDistance(drivers[k], passangers[j]);
                    if (curDist < dist){
                        dist = curDist;
                        selected = drivers[k];
                    }
                    else if (dist == curDist){

                        if (selected.name.compareTo(drivers[k].name) > 0) {
                            selected = drivers[k];
                        }
                    }
                }
                selected.x = passangers[j].destX;
                selected.y = passangers[j].destY;
                System.out.println(selected.name);

            }

        }

    }
}
