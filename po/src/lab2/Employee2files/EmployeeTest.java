package lab2.Employee2files;

import lab2.Employee;

public class EmployeeTest {
    public static void main(String args[]) {
        /* Create two objects using constructor */
        Employee empOne = new lab2.Employee("James Smith");
        Employee empTwo = new lab2.Employee("Mary Anne",33);
        Employee empThree = new Employee("Jan Kowalski",44,"Testy");
        // Invoking methods for each object created
        empOne.setAge(26);
        empOne.setDepartment("Development");
        empOne.setSalary(1000);
        empOne.printEmployee();
        empTwo.setDepartment("Software");
        empTwo.setSalary(500);
        empTwo.printEmployee();
        empThree.salary = 1500;
        empThree. printEmployee();
    }
}
