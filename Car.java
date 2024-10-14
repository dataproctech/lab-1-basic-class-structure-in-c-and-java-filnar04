public class Car {

    private String make, model;
    private int year, currentYear;

    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.currentYear = 2024;
    }
    //print information about car
    public void displayInfo() {
        System.out.printf("%s %s %d", make, model, year);
    }
    //calculate and display car age
    public void getCarAge() {
        System.out.printf("\ncar age: %d", currentYear - year);
    }
    //check if make, model and year are equal
    public boolean isSameCar(Car otherCar) {
        if (make == otherCar.make && model == otherCar.model && year == otherCar.year) return true;
        return false;
    }
    public static void main(String args[]) {
        //create test objects
        Car car = new Car("test", "test", 2000);
        Car anotherCar = new Car("test", "test", 1999);
        //test methods
        car.displayInfo();
        car.getCarAge();
        if (car.isSameCar(anotherCar)) System.out.println("\nThe same");
        else System.out.println("\nNot the same");
    }
}
