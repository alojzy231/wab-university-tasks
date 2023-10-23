package lab1.Rectangle;

public class Rectangle3 {

    int length;
    int width;
    void calculateArea(){System.out.println(length*width);}
    void print(){
        System.out.println("Dlugosc: " + length);
        System.out.println("Szerokosc: " + width);
    }

    public Rectangle3(int l, int w){
        length = l;
        width = w;
    }

    public static void main(String args[]){
        Rectangle3 r1=new Rectangle3(11,5);
        Rectangle3 r2=new Rectangle3(3,15);

        r1.calculateArea();
        r2.calculateArea();

        r1.print();
        r2.print();
    }
}
