package lab1.Puppy;

public class Puppy2 extends Puppy1 {
    String name;
    public Puppy2(String _name) {
        super(_name);

        name = _name;
    }

    public void setName( String newName ) {
        name = newName;
    }
    public String getName( ) {
        System.out.println("Puppy's name is :" + name );

        return name;
    }

    public void Print(){
        System.out.println("Name's value :" + name );
        System.out.println("PuppyAge's value :" + puppyAge );
    }

    public static void main(String []args) {
        Puppy2 myPuppy2 = new Puppy2( "Zosia" );
        myPuppy2.setName("Ola");

        myPuppy2.getName();
        myPuppy2.setAge(12);

        myPuppy2.Print();
    }
}