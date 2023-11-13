package lab2;

public class StringSubstring {
    public static void main(String[] args) {
        String str = "StringJavaAndJavaStringMethodsJava";
        String strToFind = "Java";
        int count = 0, Index = str.indexOf(strToFind);

        while (Index >= 0) {
            count++;
            Index = str.indexOf(strToFind, Index + 1);
        }

        System.out.println("Liczba wystąpień jest: " + count);
    }
}
