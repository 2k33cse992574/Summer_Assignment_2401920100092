
//Interface test and class Arithmetic

interface test {
    int square(int x);
}

class Arithmetic implements test {

    public int square(int x) {
        return x * x;
    }
}

public class ToTestInt {
    public static void main(String[] args) {

        Arithmetic a = new Arithmetic();

        int result = a.square(5);

        System.out.println("Square = " + result);
    }
}


//Outer class and Inner class

class Outer {

    void display() {
        System.out.println("Display method of Outer class");
    }

    class Inner {

        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}

public class MainClass {

    public static void main(String[] args) {

        Outer o = new Outer();
        o.display();

        Outer.Inner i = o.new Inner();
        i.display();
    }
}

//Class Point

class Point {

    private int x;
    private int y;

    // Default constructor
    public Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("x = " + x + ", y = " + y);
    }

    public static void main(String[] args) {

        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setX(30);
        p2.setY(40);
        p2.display();

        p2.setXY(50, 60);
        p2.display();
    }
}

//Class Box and Box3D

class Box {

    double length;
    double breadth;

    // Constructor
    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Area of box
    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    double height;

    // Constructor
    Box3D(double length, double breadth, double height) {

        super(length, breadth);

        this.height = height;
    }

    // Volume of box
    double volume() {
        return length * breadth * height;
    }
}

public class Main {

    public static void main(String[] args) {

        Box b = new Box(10, 5);

        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(10, 5, 4);

        System.out.println("Area = " + b3.area());
        System.out.println("Volume = " + b3.volume());
    }
}