#include <iostream>
using namespace std;

int per(int a, int b, int c, int d) {
    int res2;
    res2 = a + b + c + d;
    return res2; 
}

int plos(int a, int b, int h) {
    int res1;
    res1 = (a + b) * h / 2;
    return res1; 
}

int dlina(int a, int b, int h) {
    int res3;
    res3 = (a + b) / 2;
    return res3; 
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, h, c, d;
    cout << "длина основания - a, b; высота - h; боковая сторона - c, d: "; 
    cin >> a >> b >> h >> c >> d;
    cout << "Периметр: " << per(a, b, c, d) << endl;
    cout << "Площадь: " << plos(a, b, h) << endl;
    cout << "Длина: " << dlina(a, b, h) << endl;
    return 0;
}

