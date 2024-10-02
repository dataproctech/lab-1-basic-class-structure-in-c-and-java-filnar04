#include<iostream>

class Car {
    private:
    std::string make, model;
    int year;
    public:
    void displayInfo() {
        std::cout << "model: " << make << ' ' << model << "\nrok produkcji: " << year;
    }
    Car(std::string make, std::string model, int year) {
        this->make=make;
        this->model=model;
        this->year=year;
    }
};

int main() {
    Car car1("test", "test", 2000);
    car1.displayInfo();
}
