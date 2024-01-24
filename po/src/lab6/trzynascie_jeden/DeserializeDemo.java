package lab6.trzynascie_jeden;

// Deserializacja obiektu Employee
import java.io.*;
public class DeserializeDemo {
    public static void main(String [] args) {
        Employee e = null;
        try {
            FileInputStream fileIn = new FileInputStream("employee.ser");
            System.out.println("Otwarcie pliku employee.ser");
            ObjectInputStream in = new ObjectInputStream(fileIn);
            e = (Employee) in.readObject();
            in.close();
            fileIn.close();
        } catch (IOException i) {
            i.printStackTrace();
            return;
        } catch (ClassNotFoundException c) {
            System.out.println("Employee class not found");
            c.printStackTrace();
            return;
        }
        System.out.println(e);
        System.out.println("SSN: " + e.SSN);
    }
}