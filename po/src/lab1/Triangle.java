package lab1;

public class Triangle {
    public static void main(String[] args) {
        int numberOfRows = 10;

        for(int i = 1; i <= numberOfRows; i++){
            for(int j = 0; j < i; j++){
                System.out.print("*");
            }

            System.out.println();
        }
    }
}
