public class DogTestDrive {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.name = "Bruno";
        d.bark();
    }
}

class Dog {

    int size;
    String breed;
    String name;

    void bark() {
        System.out.println("Ruff! Ruff!");
    }
}