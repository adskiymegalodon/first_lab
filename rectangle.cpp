#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double length, width;
    cout << "������� ����� ��������������: ";
    cin >> length;
    cout << "������� ������ ��������������: ";
    cin >> width;

    int choice;
    do {
        cout << "\n���� ����������:\n";
        cout << "1. �������� ��������������\n";
        cout << "2. ������� ��������������\n";
        cout << "3. ����� ���������\n";
        cout << "4. �����\n";
        cout << "�������� �������� (1-4): ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "��������: " << 2 * (length + width) << endl;
            break;
        case 2:
            cout << "�������: " << length * width << endl;
            break;
        case 3:
            cout << "����� ���������: " << sqrt(length * length + width * width) << endl;
            break;
        case 4:
            cout << "��������� ���������." << endl;
            break;
        default:
            cout << "������: ������� ����� �� 1 �� 4!" << endl;
        }
    } while (choice != 4);

    return 0;
}