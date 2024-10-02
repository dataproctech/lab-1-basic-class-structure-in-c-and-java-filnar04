public class Car {

    private String make, model;
    private int year;

    public Car(String marka, String model, int year) {
        this.make = marka;
        this.model = model;
        this.year = year;
    }
    public void displayInfo() {
        System.out.printf("model: %s %s\nrok produkcji: %d", make, model, year);
    }
    public static void main(String args[]) {
        Car car1 = new Car("test", "test", 2000);
        car1.displayInfo();
    }
}
