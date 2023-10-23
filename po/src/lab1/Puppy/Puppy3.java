package lab1.Puppy;

public class Puppy3 {
    int puppyAge;
    String name;
    public Puppy3(String _name, int _puppyAge) {
        name = _name;
        puppyAge = _puppyAge;
        // This constructor has one parameter, name.
        System.out.println("Name chosen is :" + name );
        System.out.println("Puppy age chosen is :" + puppyAge );
    }

    public void setName( String newName ) {
        name = newName;
    }
    public String getName( ) {
        System.out.println("Puppy's name is :" + name );

        return name;
    }

    public void setAge( int age ) {
        puppyAge = age;
    }
    public int getAge( ) {
        System.out.println("Puppy's age is :" + puppyAge );
        return puppyAge;
    }

    public void Print(){
        System.out.println("Name's value :" + name );
        System.out.println("PuppyAge's value :" + puppyAge );
    }

    public static void main(String []args) {
        Puppy3 myPuppy = new Puppy3( "Zosia", 12);
        Puppy3 myPuppy2 = new Puppy3( "Ola",21);

        myPuppy.Print();
        myPuppy2.Print();
    }
}