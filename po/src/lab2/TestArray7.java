package lab2;

class TestArray {
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


public class TestArray7 {
    public static void main(String[] args) {
        double[] myList = {1.9, 2.9, 3.4, 3.5};
        double result;
        TestArray arr = new TestArray();

        // Print all the array elements
        System.out.println("Array demo");
        arr.printArray(myList);

        // Summing all elements
        result = arr.sumAll(myList);
        System.out.println("Total is " + result);
        // Finding the largest element
        result = arr.findMax(myList);
        System.out.println("Max is " + result);
    }
}
