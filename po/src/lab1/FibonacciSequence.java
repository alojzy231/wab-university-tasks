package lab1;

public class FibonacciSequence {
    public static void main(String[] args) {
        int kroki = 19;

        if(kroki < 0) return;

        System.out.print("0 ");

        if(kroki == 0) return;

        System.out.print("1 ");

        if(kroki == 1) return;

        int lastStep = 0;
        int previousStep = 1;

        for (int i = 2; i <= kroki; i++) {
            int currentStep = lastStep + previousStep;

            System.out.print(currentStep + " ");

            lastStep = previousStep;
            previousStep = currentStep;
        }
    }
}
