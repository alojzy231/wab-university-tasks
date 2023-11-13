package lab2;

public class StringMethodsConcat {
    public static void main(String[] args) {

        String str1 = "Software";
        String str2 = "Testing";
        String str3;
         str3 = str1 + str2;
        System.out.println(str3);
         str3 = str1.concat(str2);
        System.out.println(str3);
    }
}
