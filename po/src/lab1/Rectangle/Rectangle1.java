package lab1.Rectangle;

public class Rectangle1 {
    int length;
    int width;
    void calculateArea(){System.out.println(length*width);}
    void print(){
        System.out.println("Dlugosc: " + length);
        System.out.println("Szerokosc: " + width);
    }

    public static void main(String args[]){
        Rectangle1 r1=new Rectangle1();
        Rectangle1 r2=new Rectangle1();

        r1.length = 11;
        r1.width = 5;
        r2.length = 3;
        r2.width = 15;

        r1.calculateArea();
        r2.calculateArea();

        r1.print();
        r2.print();
    }
}
