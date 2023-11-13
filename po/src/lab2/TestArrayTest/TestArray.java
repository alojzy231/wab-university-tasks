package lab2.TestArrayTest;

public class TestArray {
    double findMax(double array[]) {
        double max = array[0];

        for (int i = 1; i < array.length; i++) {
            if (array[i] > max) max = array[i];
        }

        return max;
    }
    void printArray(double array[]) {
        // uzupełnić
        for(int i = 0; i < array.length; i++){
            System.out.println(array[i]);
        }
    }
    double sumAll(double array[]) {
        double sum = 0;

        for(int i = 0; i < array.length; i++){
            sum += array[i];
        }

        return sum;
    }
}
