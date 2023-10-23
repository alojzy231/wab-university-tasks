package lab1;

public class MultiplicationTable {
    public static void main(String[] args) {
        for(int i = 0; i <= 10; i++){
            for(int j = 0; j <= 10; j++){
                int result = i * j;

                if(i == 0){
                    result = j;
                }else if(j == 0){
                    result = i;
                }

                if(result == 0){
                    System.out.print("    ");
                    continue;
                }

                if(result < 10) System.out.print(" ");
                if(result < 100) System.out.print(" ");

                System.out.print(result + " ");

                if(j == 10) System.out.println();
            }
        }
    }
}
