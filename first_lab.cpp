#include <iostream>
#include <cmath>  // Для использования M_PI и математических функций

using namespace std;

//вычисление длины окружности
double circumference(double radius) {
    return 2 * M_PI * radius;
}

//площадь круга
double circleArea(double radius) {
    return M_PI * pow(radius, 2);
}

//площадь кругового сектора
double sectorArea(double radius, double angle) {
    return (M_PI * pow(radius, 2) * angle) / 360;
}

int main() {
    double radius, angle;

    //ввод
    cout << "Введите радиус круга: ";
    cin >> radius;

    cout << "Введите угол сектора в градусах: ";
    cin >> angle;

    //вывод
    cout << "Длина окружности: " << circumference(radius) << endl;
    cout << "Площадь круга: " << circleArea(radius) << endl;
    cout << "Площадь кругового сектора: " << sectorArea(radius, angle) << endl;

    return 0;
}