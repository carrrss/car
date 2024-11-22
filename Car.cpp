#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // Конструктор без параметров
    Car() : brand("Unknown"), model("Unknown"), year(0) {}

    // Конструктор с параметрами
    Car(const std::string& brand, const std::string& model, int year) 
        : brand(brand), model(model), year(year) {}

    // Конструктор копирования
    Car(const Car& other) 
        : brand(other.brand), model(other.model), year(other.year) {}

    // Метод для отображения информации о машине
    void display() const {
        std::cout << "Brand: " << brand 
                  << ", Model: " << model 
                  << ", Year: " << year << std::endl;
    }
};

// Тестирование
int main() {
    Car car1; // Конструктор без параметров
    Car car2("Toyota", "Corolla", 2020); // Конструктор с параметрами
    Car car3 = car2; // Конструктор копирования

    car1.display();
    car2.display();
    car3.display();

    return 0;
}
