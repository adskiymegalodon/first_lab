#include <iostream>
#include <cmath>
#include <stdexcept>

class Rectangle {
private:
    double length;
    double width;

    void validateDimensions(double value) const {
        if (value <= 0) {
            throw std::invalid_argument("Dimensions must be positive numbers");
        }
    }

public:

    Rectangle(double l, double w) : length(l), width(w) {
        validateDimensions(l);
        validateDimensions(w);
    }

    void setLength(double l) {
        validateDimensions(l);
        length = l;
    }

    void setWidth(double w) {
        validateDimensions(w);
        width = w;
    }

    double getLength() const { return length; }
    double getWidth() const { return width; }

    double perimeter() const {
        return 2 * (length + width);
    }

    double area() const {
        return length * width;
    }

    double diagonal() const {
        return sqrt(length * length + width * width);
    }

    void printInfo() const {
        std::cout << "Rectangle info:\n"
            << "Length: " << length << "\n"
            << "Width: " << width << "\n"
            << "Perimeter: " << perimeter() << "\n"
            << "Area: " << area() << "\n"
            << "Diagonal: " << diagonal() << "\n";
    }
};

int main() {
    try {
        double l, w;
        std::cout << "Enter rectangle length: ";
        std::cin >> l;
        std::cout << "Enter rectangle width: ";
        std::cin >> w;

        Rectangle rect(l, w);
        rect.printInfo();

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}