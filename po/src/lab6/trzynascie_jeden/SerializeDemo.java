package lab6.trzynascie_jeden;

// Przykład serializacji obiektu
import java.io.*;
public class SerializeDemo {
    public static void main(String [] args) {
        Employee e = new Employee("Reyan Ali","Phokka Kuan, AmbehtaPeer",101);
        e.SSN = 11122333;
        System.out.println(e);
        System.out.println("SSN: " + e.SSN);
        try {
            FileOutputStream fileOut =
                    new FileOutputStream("employee.ser");
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(e);
            out.close();
            fileOut.close();
            System.out.println("Serialized data is saved in employee.ser");
        } catch (IOException i) {
            i.printStackTrace();
        }
    }
}