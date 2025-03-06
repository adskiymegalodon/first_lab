#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double length, width;
    cout << "Введите длину прямоугольника: ";
    cin >> length;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    int choice;
    do {
        cout << "\nМеню вычислений:\n";
        cout << "1. Периметр прямоугольника\n";
        cout << "2. Площадь прямоугольника\n";
        cout << "3. Длина диагонали\n";
        cout << "4. Выход\n";
        cout << "Выберите действие (1-4): ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Периметр: " << 2 * (length + width) << endl;
            break;
        case 2:
            cout << "Площадь: " << length * width << endl;
            break;
        case 3:
            cout << "Длина диагонали: " << sqrt(length * length + width * width) << endl;
            break;
        case 4:
            cout << "Программа завершена." << endl;
            break;
        default:
            cout << "Ошибка: введите число от 1 до 4!" << endl;
        }
    } while (choice != 4);

    return 0;
}