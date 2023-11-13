package lab2.Employee2files;

public class Employee {
    String name; // Nazwisko
    int age; // Wiek
    String department; // dział
    public double salary; // Pensja
    // This is the constructor 1 of the class Employee
    public Employee(String _name) {
        name = _name;
    }
    // This is the constructor 2 of the class Employee
    public Employee(String _name, int _age) {
        name = _name;
        age = _age;
    }
    // This is the constructor 3 of the class Employee
    public Employee(String _name, int _age, String _department) {
        name = _name;
        age = _age;
        department = _department;
    }
    // Podaj wiek
    public int getAge() {
        return age;
    }
    // Podaj oddział
    public String getDepartment() {
        return department;
    }
    // Ustaw oddział
    public void setDepartment(String _department) {
        department = _department;
    }
    // Ustaw pensje - salary
    public void setSalary(double empSalary) {
        salary = empSalary;
    }
    // Ustaw wiek - age
    public void setAge(int _age) {
        age = _age;
    }
    // Drukuj dane pracownika
    public void printEmployee() {
        // Tu nalezy uzupełnić
        System.out.println("Imie: " + name);
        System.out.println("Wiek: " + age);
        System.out.println("Pensja: " + salary);
        System.out.println("Oddzial: " + department);
    }
}
