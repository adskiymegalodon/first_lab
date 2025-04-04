#include <clocale>
#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double perimeter() const {
        return 2 * (length + width);
    }
    double area() const {
        return length * width;
    }
    double diagonal() const {
        return sqrt(length * length + width * width);
    }
};

int main() {
    setlocale(LC_ALL, "ru_RU.utf-8");

    double len, wid;
    cout << "Введите длину прямоугольника: ";
    cin >> len;
    if (len < 0) {
        cout << "Отрицательные значения недопустимы!";
        return 0;
    }
    cout << "Введите ширину прямоугольника: ";
    cin >> wid;
    if (wid < 0) {
        cout << "Отрицательные значения недопустимы!";
        return 0;
    }
    Rectangle rect(len, wid);
    cout << "\nРезультаты расчетов:\n";
    cout << "Периметр: " << rect.perimeter() << endl;
    cout << "Площадь: " << rect.area() << endl;
    cout << "Диагональ: " << rect.diagonal() << endl;
    return 0;
}