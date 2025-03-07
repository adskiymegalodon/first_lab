#include <iostream>
#include <cmath>  // Для использования M_PI и математических функций

using namespace std;

//вычисление длины окружности
double circumference(double radius) {
    return 2 * M_PI * radius;//2PIR
}

//площадь круга
double circleArea(double radius) {
    return M_PI * pow(radius, 2);//PI*R^2
}

//площадь кругового сектора
double sectorArea(double radius, double angle) {
    return (M_PI * pow(radius, 2) * angle) / 360;//(PI*R^2 *angle)/360
}

int main() {
    setlocale(LC_ALL,"");
    double radius, angle;

    //ввод
    cout << "Введите радиус круга: ";
    cin >> radius;
    radius = abs(radius);

    do {        
    cout << "Введите угол сектора в градусах: ";
    cin >> angle;
    if (angle < 0 || angle > 360) {
        cout << "угол от 0-360";
        }
    }while (angle < 0 || angle > 360);

    //вывод
    cout << "Длина окружности: " << circumference(radius) << endl;
    cout << "Площадь круга: " << circleArea(radius) << endl;
    cout << "Площадь кругового сектора: " << sectorArea(radius, angle) << endl;

    return 0;
}
