package lab1.Rectangle;

public class Rectangle2 {
    int length;
    int width;
    void calculateArea(){System.out.println(length*width);}
    void print(){
        System.out.println("Dlugosc: " + length);
        System.out.println("Szerokosc: " + width);
    }

    public void insert(int l, int w){
        length = l;
        width = w;
    }

    public static void main(String args[]){
        Rectangle2 r1=new Rectangle2();
        Rectangle2 r2=new Rectangle2();

        r1.insert(11,5);
        r2.insert(3,15);

        r1.calculateArea();
        r2.calculateArea();

        r1.print();
        r2.print();
    }
}
