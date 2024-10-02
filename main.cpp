#include<iostream>

class Car {
    private:
    std::string marka, model;
    int year;
    public:
    void displayInfo() {
        std::cout << "model: " << marka << ' ' << model << "\nrok produkcji: " << year;
    }
    Car(std::string marka, std::string model, int rok) {
        this->marka=marka;
        this->model=model;
        this->year=rok;
    }
};

int main() {
    Car car1("test", "test", 2000);
    car1.displayInfo();
    return 0;
}
