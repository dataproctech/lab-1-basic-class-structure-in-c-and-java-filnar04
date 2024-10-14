#include<iostream>
#define CURRENT_YEAR 2024

class Car {
    private:
    std::string make, model;
    int year, currentYear;
    public:
    //print information about car
    void displayInfo() {
        std::cout << "model: " << make << ' ' << model << "\nrok produkcji: " << year;
    }
    //calculate and display car age
    void getCarAge() {
        std::cout << "\nCar age:" << currentYear - year; 
    }
    //check if make, model and year are equal
    bool isSameCar(Car otherCar) {
        return (make == otherCar.make && model == otherCar.model && year == otherCar.year);
    }
    Car(std::string make, std::string model, int year) {
        this->make=make;
        this->model=model;
        this->year=year;
        this->currentYear=CURRENT_YEAR;
    }
};

int main() {
    //create test objects
    Car car("test", "test", 2000), anotherCar("test", "test", 1999);    
    //test methods
    car.displayInfo();
    car.getCarAge();
    std::cout << car.isSameCar(anotherCar);
}
