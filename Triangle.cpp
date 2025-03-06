#include <iostream>
using namespace std;
enum class Operation { Perimeter = 1, Square, Isosceles };
bool Isosb(int a, int b, int c) {
	int pr = 1;
	if (a != b && a != c && b != c)
	{
		pr = 0;
	}
	if (pr == 1)
	{
		return true;
	}
};
void Triangle(int a, int b, int c) {
	cout << "What do you to know?" << endl;
	cout << "Press 1 if you want to know the perimeter" << endl;
	cout << "Press 2 if you want to know the area" << endl;
	cout << "Press 3 if you want to know if a triangle is isosceles" << endl;
	int choice;
	bool pr = Isosb(a, b, c);
	cin >> choice;
	double perim = a + b + c;
	double sq = sqrt(perim / 2 * (perim / 2 - a) * (perim / 2 - b) * (perim / 2 - c));
	Operation ch = static_cast<Operation>(choice);
	switch (ch) {
	case Operation::Perimeter:
	{
		cout << "The perimeter is " << perim << endl;
		break;
	}
	case Operation::Square:
	{
		cout << "The area is " << sq << endl;
		break;
	}
	case Operation::Isosceles:
	{
		if (pr == true) {
			cout << "The triangle is isosceles" << endl;
		}
		else {
			cout << "The triangle is non-isosceles" << endl;
		}
		break;
	}
	default:
		cout << "You did something wrong :-(" << endl;
		break;
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	int a = 6, b = 6, c = 7;
	Triangle(a, b, c);
	return 0;
}